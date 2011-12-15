/*
 * Copyright 2011 Matthew Endsley. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#ifndef STB_VORBIS_LITE__
#define STB_VORBIS_LITE__

#ifdef __cplusplus
extern "C" {
#endif

struct stb_vorbis;
extern void stb_vorbis_close(stb_vorbis *f);
stb_vorbis *stb_vorbis_for_push( unsigned char *data, int len, int *consumed, int *error );
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
 