#ifndef MEMORYALLOCATE_H
#define MEMORYALLOCATE_H

#include <cstddef>

void* operator new(size_t size);
void* operator new[](size_t size);



#endif
