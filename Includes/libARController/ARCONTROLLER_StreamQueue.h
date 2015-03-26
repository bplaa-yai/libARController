/*
    Copyright (C) 2014 Parrot SA

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the 
      distribution.
    * Neither the name of Parrot nor the names
      of its contributors may be used to endorse or promote products
      derived from this software without specific prior written
      permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
    AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
    OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
    SUCH DAMAGE.
*/
/**
 * @file ARCONTROLLER_StreamQueue.h
 * @brief ARCONTROLLER_StreamQueue
 * @date 02/03/2015
 * @author maxime.maitre@parrot.com
 */

#ifndef _ARCONTROLLER_STREAM_QUEUE_H_
#define _ARCONTROLLER_STREAM_QUEUE_H_

#include <stdint.h>

#include <libARController/ARCONTROLLER_Error.h>
#include <libARController/ARCONTROLLER_Frame.h>
#include <libARController/ARCONTROLLER_StreamPool.h>

typedef struct ARCONTROLLER_StreamQueue_t ARCONTROLLER_StreamQueue_t;

ARCONTROLLER_StreamQueue_t *ARCONTROLLER_StreamQueue_New (ARCONTROLLER_StreamPool_t *pool, uint32_t capacity, int flushOnIFrame, eARCONTROLLER_ERROR *error);

void ARCONTROLLER_StreamQueue_Delete (ARCONTROLLER_StreamQueue_t **streamQueue);

eARCONTROLLER_ERROR ARCONTROLLER_StreamQueue_Push (ARCONTROLLER_StreamQueue_t *streamQueue, ARCONTROLLER_Frame_t *frame);
ARCONTROLLER_Frame_t *ARCONTROLLER_StreamQueue_Pop (ARCONTROLLER_StreamQueue_t *streamQueue, eARCONTROLLER_ERROR *error);
ARCONTROLLER_Frame_t *ARCONTROLLER_StreamQueue_TryPop (ARCONTROLLER_StreamQueue_t *streamQueue, eARCONTROLLER_ERROR *error);
ARCONTROLLER_Frame_t *ARCONTROLLER_StreamQueue_PopWithTimeout (ARCONTROLLER_StreamQueue_t *streamQueue, uint32_t timeoutMs, eARCONTROLLER_ERROR *error);
eARCONTROLLER_ERROR ARCONTROLLER_StreamQueue_Flush (ARCONTROLLER_StreamQueue_t *streamQueue);


#endif /* _ARCONTROLLER_STREAM_QUEUE_H_ */