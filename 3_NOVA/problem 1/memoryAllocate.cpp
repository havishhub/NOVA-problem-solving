#include "memoryAllocate.h"
#include <iostream>
#include <cstdlib>

void* operator new(size_t size) {
 
    void *p = std::malloc(size);
    return p;
}

void* operator new[](size_t size) {


void *p = std::malloc(size);

    return p;
}

void operator delete(void* p) {

    std::free(p);
}

void operator delete[](void* p) {
}
