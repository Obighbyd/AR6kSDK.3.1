//------------------------------------------------------------------------------
// <copyright file="a_types.h" company="Atheros">
//    Copyright (c) 2004-2010 Atheros Corporation.  All rights reserved.
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation;
//
// Software distributed under the License is distributed on an "AS
// IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
// implied. See the License for the specific language governing
// rights and limitations under the License.
//
//
//------------------------------------------------------------------------------
//==============================================================================
// This file contains the definitions of the basic atheros data types.
// It is used to map the data types in atheros files to a platform specific
// type.
//
// Author(s): ="Atheros"
//==============================================================================
#ifndef _A_TYPES_H_
#define _A_TYPES_H_

#if defined(__linux__) && !defined(LINUX_EMULATION)
#include "../os/linux/include/athtypes_linux.h"
#endif

#ifdef ATHR_WM_NWF
#include "../os/windows/include/athtypes.h"
#endif

#ifdef ATHR_CE_LEGACY
#include "../os/windows/include/athtypes.h"
#endif

#ifdef REXOS
#include "../os/rexos/include/common/athtypes_rexos.h"
#endif

#if defined ART_WIN
#include "../os/win_art/include/athtypes_win.h"
#endif

#ifdef ATHR_WIN_NWF
#include <athtypes_win.h>
#endif

#endif /* _ATHTYPES_H_ */
