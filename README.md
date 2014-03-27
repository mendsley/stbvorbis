Ogg Vorbis I audio decoder  -- version 0.99996

Written in April 2007 by Sean Barrett, sponsored by RAD Game Tools.

Placed in the public domain April 2007 by the author: no copyright is
claimed, and you may use it for any purpose you like.

No warranty for any purpose is expressed or implied by the author (nor
by RAD Game Tools). Report bugs and send enhancements to the author.

Get the latest version and other information at:
    http://nothings.org/stb_vorbis/


Todo:

  - seeking (note you can seek yourself using the pushdata API)

Limitations:

  - floor 0 not supported (used in old ogg vorbis files)
  - lossless sample-truncation at beginning ignored
  - cannot concatenate multiple vorbis streams
  - sample positions are 32-bit, limiting seekable 192Khz
      files to around 6 hours (Ogg supports 64-bit)

All of these limitations may be removed in future versions.
