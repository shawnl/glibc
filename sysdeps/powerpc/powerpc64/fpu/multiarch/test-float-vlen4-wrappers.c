/* Wrapper part of tests for VSX ISA versions of vector math functions.
   Copyright (C) 2019 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include "test-float-vlen4.h"
#include <altivec.h>

#define VEC_TYPE vector float

VECTOR_WRAPPER (WRAPPER_NAME (cosf), _ZGVbN4v_cosf)
VECTOR_WRAPPER (WRAPPER_NAME (sinf), _ZGVbN4v_sinf)
VECTOR_WRAPPER (WRAPPER_NAME (logf), _ZGVbN4v_logf)
VECTOR_WRAPPER (WRAPPER_NAME (expf), _ZGVbN4v_expf)
VECTOR_WRAPPER_fFF (WRAPPER_NAME (sincosf), _ZGVbN4vvv_sincosf)
