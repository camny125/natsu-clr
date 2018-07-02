//
// Natsu CLR Metadata
//
#pragma once
#include "../loader/AssemblyFile.hpp"
#include "mddefs.hpp"
#include <optional>

namespace clr
{
	namespace metadata
	{
		class MetadataStream;

		class MetadataTable
		{
		public:
			MetadataTable(size_t count);

			void Initialize(uintptr_t& content, MetadataStream& context);
			size_t GetCount() const noexcept { return count_; }
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept = 0;
			uintptr_t GetRowBase(size_t index) const noexcept;
		private:
			uintptr_t base_;
			size_t count_;
			size_t rowSize_;
		};

		class AssemblyTable final : public MetadataTable
		{
		public:
			struct Row
			{
				uint32_t			HashAlgId;
				uint16_t			MajorVersion;
				uint16_t			MinorVersion;
				uint16_t			BuildNumber;
				uint16_t			RevisionNumber;
				AssemblyFlags		Flags;
				Sidx<stm_Blob>		PublicKey;
				Sidx<stm_String>	Name;
			};

			using MetadataTable::MetadataTable;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class ClassLayoutTable final : public MetadataTable
		{
		public:
			struct Row
			{
				uint16_t			PackingSize;
				uint32_t			ClassSize;
				Ridx<mdt_TypeDef>	Parent;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_ClassLayout> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class ConstantTable final : public MetadataTable
		{
		public:
			struct Row
			{
				ELEMENT_TYPE				Type;
				uint8_t						Reserved0;
				CodedRidx<crid_HasConstant>	Parent;
				Sidx<stm_Blob>				Value;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_Constant> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class CustomAttributeTable final : public MetadataTable
		{
		public:
			struct Row
			{
				CodedRidx<crid_HasCustomAttribute>	Parent;
				CodedRidx<crid_CustomAttributeType>	Type;
				Sidx<stm_Blob>						Value;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_CustomAttribute> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class FieldTable final : public MetadataTable
		{
		public:
			struct Row
			{
				FieldAttributes		Flags;
				Sidx<stm_String>	Name;
				Sidx<stm_Blob>		Signature;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_Field> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class MethodDefTable final : public MetadataTable
		{
		public:
			struct Row
			{
				uint32_t				RVA;
				MethodImplAttributes	ImplFlags;
				MethodAttributes		Flags;
				Sidx<stm_String>		Name;
				Sidx<stm_Blob>			Signature;
				Ridx<mdt_Param>			ParamList;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_MethodDef> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class MethodSemanticsTable final : public MetadataTable
		{
		public:
			struct Row
			{
				MethodSemanticsAttributes		Semantics;
				Ridx<mdt_MethodDef>				Method;
				CodedRidx<crid_HasSemantics>	Association;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_MethodSemantics> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class ModuleTable final : public MetadataTable
		{
		public:
			struct Row
			{
				uint16_t			Generation;
				Sidx<stm_String>	Name;
				Sidx<stm_GUID>		Mvid;
				Sidx<stm_GUID>		EncId;
				Sidx<stm_GUID>		EncBaseId;
			};

			using MetadataTable::MetadataTable;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class ParamTable final : public MetadataTable
		{
		public:
			struct Row
			{
				ParamAttributes		Flags;
				uint16_t			Sequence;
				Sidx<stm_String>	Name;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_Param> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class PropertyTable final : public MetadataTable
		{
		public:
			struct Row
			{
				PropertyAttributes	Flags;
				Sidx<stm_String>	Name;
				Sidx<stm_Blob>		Type;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_Property> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class PropertyMapTable final : public MetadataTable
		{
		public:
			struct Row
			{
				Ridx<mdt_TypeDef>	Parent;
				Ridx<mdt_Property>	PropertyList;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_PropertyMap> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class StandAloneSigTable final : public MetadataTable
		{
		public:
			struct Row
			{
				Sidx<stm_Blob>	Signature;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_StandAloneSig> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class TypeDefTable final : public MetadataTable
		{
		public:
			struct Row
			{
				TypeAttributes					Flags;
				Sidx<stm_String>				TypeName;
				Sidx<stm_String>				TypeNamespace;
				CodedRidx<crid_TypeDefOrRef>	Extends;
				Ridx<mdt_Field>					FieldList;
				Ridx<mdt_MethodDef>				MethodList;
			};

			using MetadataTable::MetadataTable;

			Row GetRow(Ridx<mdt_TypeDef> ridx, const MetadataStream& context) const;
		protected:
			virtual size_t GetRowSize(MetadataStream& context) const noexcept override;
		};

		class MetadataStream
		{
		public:
			void Initialize(uintptr_t content);

			size_t GetRowsCount(MetadataTables table) const noexcept;
			size_t GetSidxSize(StreamType stream) const noexcept;
			size_t GetRidxSize(MetadataTables table) const noexcept;
			size_t GetCodedRidxSize(CodedRowIndex ridxType) const noexcept;

#define DECL_METASTREAM_GET_ROW(type) typename type##Table::Row Get##type(Ridx<mdt_##type> ridx) const

			DECL_METASTREAM_GET_ROW(TypeDef);
			DECL_METASTREAM_GET_ROW(MethodDef);
			DECL_METASTREAM_GET_ROW(Field);
			DECL_METASTREAM_GET_ROW(Param);
			DECL_METASTREAM_GET_ROW(Constant);
			DECL_METASTREAM_GET_ROW(CustomAttribute);
			DECL_METASTREAM_GET_ROW(ClassLayout);
			DECL_METASTREAM_GET_ROW(StandAloneSig);
			DECL_METASTREAM_GET_ROW(PropertyMap);
			DECL_METASTREAM_GET_ROW(Property);
			DECL_METASTREAM_GET_ROW(MethodSemantics);
		private:
			std::unique_ptr<MetadataTable> tables_[mdt_Count];
			uint8_t heapSizes_;
		};

		class StringsStream
		{
		public:
			void Initialize(uintptr_t content);

			const char* GetString(Sidx<stm_String> sidx) const noexcept;
		private:
			const char* content_;
		};

		class USStream
		{
		public:
			void Initialize(uintptr_t content);

			const char* GetString(Sidx<stm_String> sidx) const noexcept;
		private:
			const char* content_;
		};

		class GUIDStream
		{
		public:
			void Initialize(uintptr_t content);

			const char* GetString(Sidx<stm_String> sidx) const noexcept;
		private:
			const char* content_;
		};

		class BlobStream
		{
		public:
			void Initialize(uintptr_t content);

			const char* GetString(Sidx<stm_String> sidx) const noexcept;
		private:
			const char* content_;
		};

		class MDImporter
		{
		public:
			MDImporter(std::shared_ptr<loader::AssemblyFile> assemblyFile);

			const MetadataStream& GetTables() const noexcept { return metaStream_; }
			const StringsStream& GetStrings() const noexcept { return stringsStream_; }
		private:
			std::shared_ptr<loader::AssemblyFile> assemblyFile_;

			MetadataStream metaStream_;
			StringsStream stringsStream_;
			USStream usStream_;
			GUIDStream guidStream_;
			BlobStream blobStream_;
		};
	}
}