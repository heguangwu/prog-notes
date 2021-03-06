/*
   Copyright Jakub Kruszona-Zawadzki, Core Technology Sp. z o.o.

   This file is part of MooseFS.

   READ THIS BEFORE INSTALLING THE SOFTWARE. BY INSTALLING,
   ACTIVATING OR USING THE SOFTWARE, YOU ARE AGREEING TO BE BOUND BY
   THE TERMS AND CONDITIONS OF MooseFS LICENSE AGREEMENT FOR
   VERSION 1.7 AND HIGHER IN A SEPARATE FILE. THIS SOFTWARE IS LICENSED AS
   THE PROPRIETARY SOFTWARE. YOU NOT ACQUIRE
   ANY OWNERSHIP RIGHT, TITLE OR INTEREST IN OR TO ANY INTELLECTUAL
   PROPERTY OR OTHER PROPRIETARY RIGHTS.
 */

#ifndef _MASTERCONN_H_
#define _MASTERCONN_H_

#include <inttypes.h>

void masterconn_stats(uint64_t *bin,uint64_t *bout);
uint16_t masterconn_getcsid(void);
uint64_t masterconn_getmetaid(void);
uint32_t masterconn_getmasterip(void);
uint16_t masterconn_getmasterport(void);
// void masterconn_replicate_status(uint64_t chunkid,uint32_t version,uint8_t status);
// void masterconn_send_chunk_damaged(uint64_t chunkid);
// void masterconn_send_chunk_lost(uint64_t chunkid);
// void masterconn_send_error_occurred();
// void masterconn_send_space(uint64_t usedspace,uint64_t totalspace,uint32_t chunkcount,uint64_t tdusedspace,uint64_t tdtotalspace,uint32_t tdchunkcount);
int masterconn_init(void);

#endif
