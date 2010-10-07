// -*- mode: c++ -*-

// This code is in the public domain.

#ifndef NEWDEL_H
#define NEWDEL_H

#include "WProgram.h"

void *operator new(size_t size);
void *operator new[](size_t size);
void operator delete(void *ptr);
void operator delete[](void *ptr);

#endif	// NEWDEL_H

// jl
