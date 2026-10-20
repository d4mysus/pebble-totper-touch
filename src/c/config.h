#pragma once

#define VERSION "1.3"

#define MEMORY_CRITICAL_LEVEL 4000

#if defined(PBL_TOUCH) && PBL_API_EXISTS(app_touch_navigation_enable)
#define TOUCH_NAVIGATION_SUPPORTED
#endif

//#define DEBUG
#define DEBUG_ACCOUNTS 25
