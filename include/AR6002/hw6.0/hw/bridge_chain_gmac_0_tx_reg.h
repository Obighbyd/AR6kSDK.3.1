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


#ifndef _BRIDGE_CHAIN_GMAC_0_TX_REG_REG_H_
#define _BRIDGE_CHAIN_GMAC_0_TX_REG_REG_H_

#define GMAC_TX_0_DESC_START_ADDRESS_ADDRESS     0x00000000
#define GMAC_TX_0_DESC_START_ADDRESS_OFFSET      0x00000000
#define GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_MSB 31
#define GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_LSB 0
#define GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_MASK 0xffffffff
#define GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_GET(x) (((x) & GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_MASK) >> GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_LSB)
#define GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_SET(x) (((x) << GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_LSB) & GMAC_TX_0_DESC_START_ADDRESS_ADDRESS_MASK)

#define GMAC_TX_0_DMA_START_ADDRESS              0x00000004
#define GMAC_TX_0_DMA_START_OFFSET               0x00000004
#define GMAC_TX_0_DMA_START_RESTART_MSB          4
#define GMAC_TX_0_DMA_START_RESTART_LSB          4
#define GMAC_TX_0_DMA_START_RESTART_MASK         0x00000010
#define GMAC_TX_0_DMA_START_RESTART_GET(x)       (((x) & GMAC_TX_0_DMA_START_RESTART_MASK) >> GMAC_TX_0_DMA_START_RESTART_LSB)
#define GMAC_TX_0_DMA_START_RESTART_SET(x)       (((x) << GMAC_TX_0_DMA_START_RESTART_LSB) & GMAC_TX_0_DMA_START_RESTART_MASK)
#define GMAC_TX_0_DMA_START_START_MSB            0
#define GMAC_TX_0_DMA_START_START_LSB            0
#define GMAC_TX_0_DMA_START_START_MASK           0x00000001
#define GMAC_TX_0_DMA_START_START_GET(x)         (((x) & GMAC_TX_0_DMA_START_START_MASK) >> GMAC_TX_0_DMA_START_START_LSB)
#define GMAC_TX_0_DMA_START_START_SET(x)         (((x) << GMAC_TX_0_DMA_START_START_LSB) & GMAC_TX_0_DMA_START_START_MASK)

#define GMAC_TX_0_INTERRUPT_LIMIT_ADDRESS        0x00000008
#define GMAC_TX_0_INTERRUPT_LIMIT_OFFSET         0x00000008
#define GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_MSB    15
#define GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_LSB    4
#define GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_MASK   0x0000fff0
#define GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_GET(x) (((x) & GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_MASK) >> GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_LSB)
#define GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_SET(x) (((x) << GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_LSB) & GMAC_TX_0_INTERRUPT_LIMIT_TIMEOUT_MASK)
#define GMAC_TX_0_INTERRUPT_LIMIT_COUNT_MSB      3
#define GMAC_TX_0_INTERRUPT_LIMIT_COUNT_LSB      0
#define GMAC_TX_0_INTERRUPT_LIMIT_COUNT_MASK     0x0000000f
#define GMAC_TX_0_INTERRUPT_LIMIT_COUNT_GET(x)   (((x) & GMAC_TX_0_INTERRUPT_LIMIT_COUNT_MASK) >> GMAC_TX_0_INTERRUPT_LIMIT_COUNT_LSB)
#define GMAC_TX_0_INTERRUPT_LIMIT_COUNT_SET(x)   (((x) << GMAC_TX_0_INTERRUPT_LIMIT_COUNT_LSB) & GMAC_TX_0_INTERRUPT_LIMIT_COUNT_MASK)

#define GMAC_TX_0_BURST_SIZE_ADDRESS             0x0000000c
#define GMAC_TX_0_BURST_SIZE_OFFSET              0x0000000c
#define GMAC_TX_0_BURST_SIZE_BURST_MSB           1
#define GMAC_TX_0_BURST_SIZE_BURST_LSB           0
#define GMAC_TX_0_BURST_SIZE_BURST_MASK          0x00000003
#define GMAC_TX_0_BURST_SIZE_BURST_GET(x)        (((x) & GMAC_TX_0_BURST_SIZE_BURST_MASK) >> GMAC_TX_0_BURST_SIZE_BURST_LSB)
#define GMAC_TX_0_BURST_SIZE_BURST_SET(x)        (((x) << GMAC_TX_0_BURST_SIZE_BURST_LSB) & GMAC_TX_0_BURST_SIZE_BURST_MASK)

#define GMAC_TX_0_DBG_TX_ADDRESS                 0x00000010
#define GMAC_TX_0_DBG_TX_OFFSET                  0x00000010
#define GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_MSB      31
#define GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_LSB      16
#define GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_MASK     0xffff0000
#define GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_GET(x)   (((x) & GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_MASK) >> GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_LSB)
#define GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_SET(x)   (((x) << GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_LSB) & GMAC_TX_0_DBG_TX_FIFO_TOTAL_LEN_MASK)
#define GMAC_TX_0_DBG_TX_STATE_MSB               2
#define GMAC_TX_0_DBG_TX_STATE_LSB               0
#define GMAC_TX_0_DBG_TX_STATE_MASK              0x00000007
#define GMAC_TX_0_DBG_TX_STATE_GET(x)            (((x) & GMAC_TX_0_DBG_TX_STATE_MASK) >> GMAC_TX_0_DBG_TX_STATE_LSB)
#define GMAC_TX_0_DBG_TX_STATE_SET(x)            (((x) << GMAC_TX_0_DBG_TX_STATE_LSB) & GMAC_TX_0_DBG_TX_STATE_MASK)

#define GMAC_TX_0_DBG_TX_CUR_ADDR_ADDRESS        0x00000014
#define GMAC_TX_0_DBG_TX_CUR_ADDR_OFFSET         0x00000014
#define GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_MSB       31
#define GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_LSB       0
#define GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_MASK      0xffffffff
#define GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_GET(x)    (((x) & GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_MASK) >> GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_LSB)
#define GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_SET(x)    (((x) << GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_LSB) & GMAC_TX_0_DBG_TX_CUR_ADDR_ADDR_MASK)

#define GMAC_TX_0_DATA_SWAP_ADDRESS              0x00000018
#define GMAC_TX_0_DATA_SWAP_OFFSET               0x00000018
#define GMAC_TX_0_DATA_SWAP_SWAPD_MSB            1
#define GMAC_TX_0_DATA_SWAP_SWAPD_LSB            1
#define GMAC_TX_0_DATA_SWAP_SWAPD_MASK           0x00000002
#define GMAC_TX_0_DATA_SWAP_SWAPD_GET(x)         (((x) & GMAC_TX_0_DATA_SWAP_SWAPD_MASK) >> GMAC_TX_0_DATA_SWAP_SWAPD_LSB)
#define GMAC_TX_0_DATA_SWAP_SWAPD_SET(x)         (((x) << GMAC_TX_0_DATA_SWAP_SWAPD_LSB) & GMAC_TX_0_DATA_SWAP_SWAPD_MASK)
#define GMAC_TX_0_DATA_SWAP_SWAP_MSB             0
#define GMAC_TX_0_DATA_SWAP_SWAP_LSB             0
#define GMAC_TX_0_DATA_SWAP_SWAP_MASK            0x00000001
#define GMAC_TX_0_DATA_SWAP_SWAP_GET(x)          (((x) & GMAC_TX_0_DATA_SWAP_SWAP_MASK) >> GMAC_TX_0_DATA_SWAP_SWAP_LSB)
#define GMAC_TX_0_DATA_SWAP_SWAP_SET(x)          (((x) << GMAC_TX_0_DATA_SWAP_SWAP_LSB) & GMAC_TX_0_DATA_SWAP_SWAP_MASK)


#ifndef __ASSEMBLER__

typedef struct bridge_chain_gmac_0_tx_reg_reg_s {
  volatile unsigned int gmac_tx_0_desc_start_address;
  volatile unsigned int gmac_tx_0_dma_start;
  volatile unsigned int gmac_tx_0_interrupt_limit;
  volatile unsigned int gmac_tx_0_burst_size;
  volatile unsigned int gmac_tx_0_dbg_tx;
  volatile unsigned int gmac_tx_0_dbg_tx_cur_addr;
  volatile unsigned int gmac_tx_0_data_swap;
} bridge_chain_gmac_0_tx_reg_reg_t;

#endif /* __ASSEMBLER__ */

#endif /* _BRIDGE_CHAIN_GMAC_0_TX_REG_H_ */
