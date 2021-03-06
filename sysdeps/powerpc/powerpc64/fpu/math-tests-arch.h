/* Runtime architecture check for math tests. PPC64 version.
   Copyright (C) 2014-2019 Free Software Foundation, Inc.
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

#if defined REQUIRE_VSX

# include "init-arch.h"

# define INIT_ARCH_EXT
# define CHECK_ARCH_EXT                                        \
  do                                                           \
    {                                                          \
      INIT_ARCH()                                              \
      if (!(hwcap2 & PPC_FEATURE2_ARCH_2_07)) return;          \
    }                                                          \
  while (0)

#else
# include <sysdeps/generic/math-tests-arch.h>
#endif
