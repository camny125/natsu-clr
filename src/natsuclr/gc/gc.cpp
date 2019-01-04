//
// Natsu CLR VM
//
#include <cassert>
#include <gc/gc.hpp>
#include <utils.hpp>

using namespace clr;
using namespace clr::corlib;
using namespace clr::gc;
using namespace clr::vm;
using namespace clr::metadata;

GC& GC::Current()
{
    static GC gc;
    return gc;
}

GC::GC()
{
}

ObjectRef<> GC::AllocateObject(const EEClass* cls)
{
    assert(cls->LoadLevel >= clsLoad_InstanceFields);
    auto size = sizeof(ObjectHeader) + cls->InstanceSize;
    auto header = reinterpret_cast<ObjectHeader*>(new char[size]);
    header->Class = cls;
    return ObjectRef<>(reinterpret_cast<Object*>(uintptr_t(header) + sizeof(ObjectHeader)));
}