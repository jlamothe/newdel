// This code is in the public domain.

#include "newdel.h"

void *operator new(size_t size)
{
  return malloc(size);
}

void *operator new[](size_t size)
{
  return malloc(size);
}

void operator delete(void *ptr)
{
  free(ptr);
}

void operator delete[](void *ptr)
{
  free(ptr);
}

// jl
