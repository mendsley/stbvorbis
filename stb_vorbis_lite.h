/*-
 * Copyright 2011 Matthew Endsley
 * All rights reserved
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted providing that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef STB_VORBIS_LITE__
#define STB_VORBIS_LITE__

#ifdef __cplusplus
extern "C" {
#endif

struct stb_vorbis;
extern void stb_vorbis_close(stb_vorbis *f);
stb_vorbis *stb_vorbis_for_push( unsigned char *data, int len, int *consumed, int *error );
int stb_vorbis_get_sample_rate( stb_vorbis* stream );
extern int stb_vorbis_decode_frame_pushdata(
         stb_vorbis *f, unsigned char *datablock, int datablock_length_in_bytes,
         int *channels,             // place to write number of float * buffers
         float ***output,           // place to write float ** array of float * buffers
         int *samples               // place to write number of output samples
     );

static const int c_vorbisError_NeedMoreData = 1;

#ifdef __cplusplus
}
#endif

#endif /* STB_VORBIS_LITE__ */
