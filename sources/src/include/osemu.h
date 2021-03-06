 /*
  * UAE - The Un*x Amiga Emulator
  *
  * OS emulation prototypes
  *
  * Copyright 1996 Bernd Schmidt
  */

#ifndef UAE_OSEMU_H
#define UAE_OSEMU_H

#include "uae_types.h"
#ifdef FSUAE
#include "uae_inline.h"
#include "uae_memory.h"
#include <stddef.h>
#endif

STATIC_INLINE char *raddr(uaecptr p)
{
    return p == 0 ? NULL : (char *)get_real_address (p);
}

extern void gfxlib_install(void);

/* graphics.library */

extern int GFX_WritePixel(uaecptr rp, int x, int y);

#endif /* UAE_OSEMU_H */
