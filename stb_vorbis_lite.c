/*
 * Copyright 2011 Matthew Endsley. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#include "stb_vorbis_lite.h"

#ifdef __cplusplus
extern "C" {
#endif

stb_vorbis *stb_vorbis_for_push( unsigned char *data, int len, int *consumed, int *error )
{
	return stb_vorbis_open_pushdata(data, len, consumed, error, NULL);
}

int stb_vorbis_get_sample_rate( stb_vorbis* stream )
{
	const stb_vorbis_info info = stb_vorbis_get_info(stream);
	return info.sample_rate;
}

#ifdef __cplusplus
}
#endif
