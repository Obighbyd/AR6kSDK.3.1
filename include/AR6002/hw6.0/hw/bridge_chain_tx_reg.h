// ------------------------------------------------------------------
// Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
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
// ------------------------------------------------------------------
//===================================================================
// Author(s): ="Atheros"
//===================================================================


#ifndef _BRIDGE_CHAIN_TX_REG_REG_H_
#define _BRIDGE_CHAIN_TX_REG_REG_H_

#define DESC_START_ADDRESS_ADDRESS               0x00000000
#define DESC_START_ADDRESS_OFFSET                0x00000000
#define DESC_START_ADDRESS_ADDRESS_MSB           31
#define DESC_START_ADDRESS_ADDRESS_LSB           0
#define DESC_START_ADDRESS_ADDRESS_MASK          0xffffffff
#define DESC_START_ADDRESS_ADDRESS_GET(x)        (((x) & DESC_START_ADDRESS_ADDRESS_MASK) >> DESC_START_ADDRESS_ADDRESS_LSB)
#define DESC_START_ADDRESS_ADDRESS_SET(x)        (((x) << DESC_START_ADDRESS_ADDRESS_LSB) & DESC_START_ADDRESS_ADDRESS_MASK)

#define DMA_START_ADDRESS                        0x00000004
#define DMA_START_OFFSET                         0x00000004
#define DMA_START_RESTART_MSB                    4
#define DMA_START_RESTART_LSB                    4
#define DMA_START_RESTART_MASK                   0x00000010
#define DMA_START_RESTART_GET(x)                 (((x) & DMA_START_RESTART_MASK) >> DMA_START_RESTART_LSB)
#define DMA_START_RESTART_SET(x)                 (((x) << DMA_START_RESTART_LSB) & DMA_START_RESTART_MASK)
#define DMA_START_START_MSB                      0
#define DMA_START_START_LSB                      0
#define DMA_START_START_MASK                     0x00000001
#define DMA_START_START_GET(x)                   (((x) & DMA_START_START_MASK) >> DMA_START_START_LSB)
#define DMA_START_START_SET(x)                   (((x) << DMA_START_START_LSB) & DMA_START_START_MASK)

#define INTERRUPT_LIMIT_ADDRESS                  0x00000008
#define INTERRUPT_LIMIT_OFFSET                   0x00000008
#define INTERRUPT_LIMIT_TIMEOUT_MSB              15
#define INTERRUPT_LIMIT_TIMEOUT_LSB              4
#define INTERRUPT_LIMIT_TIMEOUT_MASK             0x0000fff0
#define INTERRUPT_LIMIT_TIMEOUT_GET(x)           (((x) & INTERRUPT_LIMIT_TIMEOUT_MASK) >> INTERRUPT_LIMIT_TIMEOUT_LSB)
#define INTERRUPT_LIMIT_TIMEOUT_SET(x)           (((x) << INTERRUPT_LIMIT_TIMEOUT_LSB) & INTERRUPT_LIMIT_TIMEOUT_MASK)
#define INTERRUPT_LIMIT_COUNT_MSB                3
#define INTERRUPT_LIMIT_COUNT_LSB                0
#define INTERRUPT_LIMIT_COUNT_MASK               0x0000000f
#define INTERRUPT_LIMIT_COUNT_GET(x)             (((x) & INTERRUPT_LIMIT_COUNT_MASK) >> INTERRUPT_LIMIT_COUNT_LSB)
#define INTERRUPT_LIMIT_COUNT_SET(x)             (((x) << INTERRUPT_LIMIT_COUNT_LSB) & INTERRUPT_LIMIT_COUNT_MASK)

#define BURST_SIZE_ADDRESS                       0x0000000c
#define BURST_SIZE_OFFSET                        0x0000000c
#define BURST_SIZE_BURST_MSB                     1
#define BURST_SIZE_BURST_LSB                     0
#define BURST_SIZE_BURST_MASK                    0x00000003
#define BURST_SIZE_BURST_GET(x)                  (((x) & BURST_SIZE_BURST_MASK) >> BURST_SIZE_BURST_LSB)
#define BURST_SIZE_BURST_SET(x)                  (((x) << BURST_SIZE_BURST_LSB) & BURST_SIZE_BURST_MASK)

#define DBG_TX_ADDRESS                           0x00000010
#define DBG_TX_OFFSET                            0x00000010
#define DBG_TX_FIFO_TOTAL_LEN_MSB                31
#define DBG_TX_FIFO_TOTAL_LEN_LSB                16
#define DBG_TX_FIFO_TOTAL_LEN_MASK               0xffff0000
#define DBG_TX_FIFO_TOTAL_LEN_GET(x)             (((x) & DBG_TX_FIFO_TOTAL_LEN_MASK) >> DBG_TX_FIFO_TOTAL_LEN_LSB)
#define DBG_TX_FIFO_TOTAL_LEN_SET(x)             (((x) << DBG_TX_FIFO_TOTAL_LEN_LSB) & DBG_TX_FIFO_TOTAL_LEN_MASK)
#define DBG_TX_STATE_MSB                         2
#define DBG_TX_STATE_LSB                         0
#define DBG_TX_STATE_MASK                        0x00000007
#define DBG_TX_STATE_GET(x)                      (((x) & DBG_TX_STATE_MASK) >> DBG_TX_STATE_LSB)
#define DBG_TX_STATE_SET(x)                      (((x) << DBG_TX_STATE_LSB) & DBG_TX_STATE_MASK)

#define DBG_TX_CUR_ADDR_ADDRESS                  0x00000014
#define DBG_TX_CUR_ADDR_OFFSET                   0x00000014
#define DBG_TX_CUR_ADDR_ADDR_MSB                 31
#define DBG_TX_CUR_ADDR_ADDR_LSB                 0
#define DBG_TX_CUR_ADDR_ADDR_MASK                0xffffffff
#define DBG_TX_CUR_ADDR_ADDR_GET(x)              (((x) & DBG_TX_CUR_ADDR_ADDR_MASK) >> DBG_TX_CUR_ADDR_ADDR_LSB)
#define DBG_TX_CUR_ADDR_ADDR_SET(x)              (((x) << DBG_TX_CUR_ADDR_ADDR_LSB) & DBG_TX_CUR_ADDR_ADDR_MASK)

#define DATA_SWAP_ADDRESS                        0x00000018
#define DATA_SWAP_OFFSET                         0x00000018
#define DATA_SWAP_SWAPD_MSB                      1
#define DATA_SWAP_SWAPD_LSB                      1
#define DATA_SWAP_SWAPD_MASK                     0x00000002
#define DATA_SWAP_SWAPD_GET(x)                   (((x) & DATA_SWAP_SWAPD_MASK) >> DATA_SWAP_SWAPD_LSB)
#define DATA_SWAP_SWAPD_SET(x)                   (((x) << DATA_SWAP_SWAPD_LSB) & DATA_SWAP_SWAPD_MASK)
#define DATA_SWAP_SWAP_MSB                       0
#define DATA_SWAP_SWAP_LSB                       0
#define DATA_SWAP_SWAP_MASK                      0x00000001
#define DATA_SWAP_SWAP_GET(x)                    (((x) & DATA_SWAP_SWAP_MASK) >> DATA_SWAP_SWAP_LSB)
#define DATA_SWAP_SWAP_SET(x)                    (((x) << DATA_SWAP_SWAP_LSB) & DATA_SWAP_SWAP_MASK)


#ifndef __ASSEMBLER__

typedef struct bridge_chain_tx_reg_reg_s {
  volatile unsigned int desc_start_address;
  volatile unsigned int dma_start;
  volatile unsigned int interrupt_limit;
  volatile unsigned int burst_size;
  volatile unsigned int dbg_tx;
  volatile unsigned int dbg_tx_cur_addr;
  volatile unsigned int data_swap;
} bridge_chain_tx_reg_reg_t;

#endif /* __ASSEMBLER__ */

#endif /* _BRIDGE_CHAIN_TX_REG_H_ */
