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


#ifdef __cplusplus
}
#endif
