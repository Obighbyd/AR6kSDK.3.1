//------------------------------------------------------------------------------
// <copyright file="athdefs.h" company="Atheros">
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
// Author(s): ="Atheros"
//==============================================================================
#ifndef __ATHDEFS_H__
#define __ATHDEFS_H__

/*
 * This file contains definitions that may be used across both
 * Host and Target software.  Nothing here is module-dependent
 * or platform-dependent.
 */

/*
 * Generic error codes that can be used by hw, sta, ap, sim, dk
 * and any other environments. Since these are enums, feel free to
 * add any more codes that you need.
 */

typedef enum {
    A_ERROR = -1,               /* Generic error return */
    A_OK = 0,                   /* success */
                                /* Following values start at 1 */
    A_DEVICE_NOT_FOUND,         /* not able to find PCI device */
    A_NO_MEMORY,                /* not able to allocate memory, not available */
    A_MEMORY_NOT_AVAIL,         /* memory region is not free for mapping */
    A_NO_FREE_DESC,             /* no free descriptors available */
    A_BAD_ADDRESS,              /* address does not match descriptor */
    A_WIN_DRIVER_ERROR,         /* used in NT_HW version, if problem at init */
    A_REGS_NOT_MAPPED,          /* registers not correctly mapped */
    A_EPERM,                    /* Not superuser */
    A_EACCES,                   /* Access denied */
    A_ENOENT,                   /* No such entry, search failed, etc. */
    A_EEXIST,                   /* The object already exists (can't create) */
    A_EFAULT,                   /* Bad address fault */
    A_EBUSY,                    /* Object is busy */
    A_EINVAL,                   /* Invalid parameter */
    A_EMSGSIZE,                 /* Inappropriate message buffer length */
    A_ECANCELED,                /* Operation canceled */
    A_ENOTSUP,                  /* Operation not supported */
    A_ECOMM,                    /* Communication error on send */
    A_EPROTO,                   /* Protocol error */
    A_ENODEV,                   /* No such device */
    A_EDEVNOTUP,                /* device is not UP */
    A_NO_RESOURCE,              /* No resources for requested operation */
    A_HARDWARE,                 /* Hardware failure */
    A_PENDING,                  /* Asynchronous routine; will send up results la
ter (typically in callback) */
    A_EBADCHANNEL,              /* The channel cannot be used */
    A_DECRYPT_ERROR,            /* Decryption error */
    A_PHY_ERROR,                /* RX PHY error */
    A_CONSUMED                  /* Object was consumed */
} A_STATUS;

#define A_SUCCESS(x)        (x == A_OK)
#define A_FAILED(x)         (!A_SUCCESS(x))

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#endif /* __ATHDEFS_H__ */
