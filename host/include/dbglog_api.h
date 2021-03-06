//------------------------------------------------------------------------------
// <copyright file="dbglog_api.h" company="Atheros">
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
// This file contains host side debug primitives.
//
// Author(s): ="Atheros"
//==============================================================================
#ifndef _DBGLOG_API_H_
#define _DBGLOG_API_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "dbglog.h"

#define DBGLOG_HOST_LOG_BUFFER_SIZE            DBGLOG_LOG_BUFFER_SIZE

#define DBGLOG_GET_DBGID(arg) \
    ((arg & DBGLOG_DBGID_MASK) >> DBGLOG_DBGID_OFFSET)

#define DBGLOG_GET_MODULEID(arg) \
    ((arg & DBGLOG_MODULEID_MASK) >> DBGLOG_MODULEID_OFFSET)

#define DBGLOG_GET_NUMARGS(arg) \
    ((arg & DBGLOG_NUM_ARGS_MASK) >> DBGLOG_NUM_ARGS_OFFSET)

#define DBGLOG_GET_TIMESTAMP(arg) \
    ((arg & DBGLOG_TIMESTAMP_MASK) >> DBGLOG_TIMESTAMP_OFFSET)

/** 
  @param lv 0->RAW info, 1->Breif translated info, 2->Full info
  @param logbuf dbglog buffer
 */
int dbg_formater(int lv, char *output, size_t len, A_UINT32 ts, A_INT32 *logbuf);

#ifdef __cplusplus
}
#endif

#endif /* _DBGLOG_API_H_ */
