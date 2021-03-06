#include "vice.h"

#error "Unix videoarch.h"

#include "/home/chris/src/the64-hardware/firmware/src/videoarch.h" // CDS

#if 0 // CDS

#if defined(GP2X) || defined(WIZ)
#include "gp2x/videoarch.h"
#else
#ifdef USE_GNOMEUI
#include "x11/gnome/videoarch.h"
#else
#ifdef VMS
#include "x11xawvideoarch.h"
#else
#ifdef MACOSX_COCOA
#include "macosx/cocoa/videoarch.h"
#else
#include "x11/xaw/videoarch.h"
#endif
#endif
#endif
#endif

#endif
