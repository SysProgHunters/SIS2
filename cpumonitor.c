#include <sys/time.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <langinfo.h>
#include <limits.h>
#include <locale.h>
#include <poll.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <wchar.h>

#include <curses.h>
#include <term.h>

#include <sys/types.h>
#include <sys/sysctl.h>         

/******************************************************************
 * Utillities
 */

#define MIN(a, b) ({                            \
        typeof(a) a = (a);                \
        __typeof(b) b = (b);                \
        (__a < __b) ? __a : __b;                \
        })

#define MAX(a, b) ({                            \
        __typeof(a) a = (a);                \
        __typeof(b) b = (b);                \
        (__a > __b) ? __a : __b;                \
        })

#define SWAP(a, b) ({                           \
        __typeof(a) __a = (a);                \
        (a) = (b);                              \
        (b) = __a;                              \
        })