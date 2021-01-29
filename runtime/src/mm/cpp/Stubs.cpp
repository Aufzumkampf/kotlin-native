/*
 * Copyright 2010-2020 JetBrains s.r.o. Use of this source code is governed by the Apache 2.0 license
 * that can be found in the LICENSE file.
 */

#include "Memory.h"

#include "KAssert.h"

extern "C" {

OBJ_GETTER(InitThreadLocalSingleton, ObjHeader** location, const TypeInfo* typeInfo, void (*ctor)(ObjHeader*)) {
    TODO();
}

RUNTIME_NOTHROW void SetStackRef(ObjHeader** location, const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void SetHeapRef(ObjHeader** location, const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void ZeroHeapRef(ObjHeader** location) {
    TODO();
}

RUNTIME_NOTHROW void ZeroArrayRefs(ArrayHeader* array) {
    TODO();
}

RUNTIME_NOTHROW void ZeroStackRef(ObjHeader** location) {
    TODO();
}

RUNTIME_NOTHROW void UpdateStackRef(ObjHeader** location, const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void UpdateHeapRef(ObjHeader** location, const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void UpdateHeapRefIfNull(ObjHeader** location, const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void UpdateReturnRef(ObjHeader** returnSlot, const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW OBJ_GETTER(
        SwapHeapRefLocked, ObjHeader** location, ObjHeader* expectedValue, ObjHeader* newValue, int32_t* spinlock, int32_t* cookie) {
    TODO();
}

RUNTIME_NOTHROW void SetHeapRefLocked(ObjHeader** location, ObjHeader* newValue, int32_t* spinlock, int32_t* cookie) {
    TODO();
}

RUNTIME_NOTHROW OBJ_GETTER(ReadHeapRefLocked, ObjHeader** location, int32_t* spinlock, int32_t* cookie) {
    TODO();
}

void Kotlin_native_internal_GC_collect(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_suspend(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_resume(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_stop(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_start(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_setThreshold(ObjHeader*, int32_t value) {
    TODO();
}

int32_t Kotlin_native_internal_GC_getThreshold(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_setCollectCyclesThreshold(ObjHeader*, int64_t value) {
    TODO();
}

int64_t Kotlin_native_internal_GC_getCollectCyclesThreshold(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_setThresholdAllocations(ObjHeader*, int64_t value) {
    TODO();
}

int64_t Kotlin_native_internal_GC_getThresholdAllocations(ObjHeader*) {
    TODO();
}

void Kotlin_native_internal_GC_setTuneThreshold(ObjHeader*, int32_t value) {
    TODO();
}

bool Kotlin_native_internal_GC_getTuneThreshold(ObjHeader*) {
    TODO();
}

RUNTIME_NOTHROW void PerformFullGC(MemoryState* memory) {
    TODO();
}

bool TryAddHeapRef(const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void ReleaseHeapRef(const ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void ReleaseHeapRefNoCollect(const ObjHeader* object) {
    TODO();
}

ForeignRefContext InitLocalForeignRef(ObjHeader* object) {
    TODO();
}

RUNTIME_NOTHROW void Kotlin_mm_safePointFunctionEpilogue() {
    // TODO: Unimplemented
}

RUNTIME_NOTHROW void Kotlin_mm_safePointWhileLoopBody() {
    // TODO: Unimplemented
}

RUNTIME_NOTHROW void Kotlin_mm_safePointExceptionUnwind() {
    // TODO: Unimplemented
}

} // extern "C"
