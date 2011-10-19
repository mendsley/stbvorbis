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
struct stb_vorbis_stream_info;
extern stb_vorbis * stb_vorbis_from_memory(unsigned char *data, int len);
extern void stb_vorbis_close(stb_vorbis *f);
extern int stb_vorbis_get_samples_short_interleaved(stb_vorbis *f, int channels, short *buffer, int num_shorts);
extern void stb_vorbis_get_stream_info( stb_vorbis* v, stb_vorbis_stream_info* info );

struct stb_vorbis_stream_info
{
	int channels;
	unsigned int sample_rate;
};

#ifdef __cplusplus
}
#endif

#endif /* STB_VORBIS_LITE__ */
 