#pragma once
#include <cstdint>
#include <type_traits>

#define THROW_ALWAYS(exception,...) throw exception(__VA_ARGS__);
#define THROW_IF_NOT(expr,exception,...) {if(!(expr)) throw exception(__VA_ARGS__);}

#define MAKE_ENUM_CLASS_BITMASK_TYPE(enumName) static_assert(std::is_enum<enumName>::value, "enumName is not a enum.");\
	constexpr enumName operator|(enumName a, enumName b) noexcept\
	{\
		typedef std::underlying_type_t<enumName> underlying_type;\
		return static_cast<enumName>(static_cast<underlying_type>(a) | static_cast<underlying_type>(b));\
	}\
	constexpr enumName operator&(enumName a, enumName b) noexcept\
	{\
		typedef std::underlying_type_t<enumName> underlying_type;\
		return static_cast<enumName>(static_cast<underlying_type>(a) & static_cast<underlying_type>(b));\
	}\
	constexpr enumName operator^(enumName a, enumName b) noexcept\
	{\
		typedef std::underlying_type_t<enumName> underlying_type;\
		return static_cast<enumName>(static_cast<underlying_type>(a) ^ static_cast<underlying_type>(b));\
	}\
	constexpr enumName operator~(enumName a) noexcept\
	{\
		typedef std::underlying_type_t<enumName> underlying_type;\
		return static_cast<enumName>(~static_cast<underlying_type>(a));\
	}\
	constexpr enumName& operator|=(enumName& a, enumName b) noexcept\
	{\
		return a = (a | b);\
	}\
	constexpr enumName& operator&=(enumName& a, enumName b) noexcept\
	{\
		return a = (a & b);\
	}\
	constexpr enumName& operator^=(enumName& a, enumName b) noexcept\
	{\
		return a = (a ^ b);\
	}


template<class T>
T align(T value, size_t base)
{
	auto r = value % base;
	return T(r ? value + (base - r) : value);
}

struct BinaryReader
{
	BinaryReader(uintptr_t base)
		:base_(base)
	{
	}

	template<class T>
	T Read() noexcept
	{
		auto offset = base_;
		base_ += sizeof(T);

		// aligned read
		if (offset % sizeof(T) == 0)
			return *reinterpret_cast<const T*>(offset);
		else
		{
			alignas(alignof(T)) uint8_t value[sizeof(T)];
			auto begin = reinterpret_cast<const uint8_t*>(offset);
			for (size_t i = 0; i < sizeof(T); i++)
				value[i] = begin[i];
			return *reinterpret_cast<const T*>(value);
		}
	}

	template<class T>
	T Read(size_t size)
	{
		if (size == 1)
			return { Read<uint8_t>() };
		else if (size == 2)
			return { Read<uint16_t>() };
		else if (size == 4)
			return { Read<uint32_t>() };
		else
			throw std::invalid_argument("invalid size");
	}

	uintptr_t GetOffset() const noexcept { return base_; }
private:
	uintptr_t base_;
};