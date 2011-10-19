/*
 * Copyright 2011 Matthew Endsley. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#include "stb_vorbis_lite.h"

#ifdef __cplusplus
extern "C" {
#endif

void stb_vorbis_get_stream_info( stb_vorbis* v, stb_vorbis_stream_info* info )
{
	stb_vorbis_info vinfo = stb_vorbis_get_info(v);
	info->channels = vinfo.channels;
	info->sample_rate = vinfo.sample_rate;
}

stb_vorbis * stb_vorbis_from_memory( unsigned char *data, int len )
{
	return stb_vorbis_open_memory( data, len, NULL, NULL );
}

#ifdef __cplusplus
}
#endif
