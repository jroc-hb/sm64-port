#ifndef _OS_LIBC_H_
#define _OS_LIBC_H_

#include "ultratypes.h"

// Old deprecated functions from strings.h, replaced by memcpy/memset.
extern void bcopy(const void *, void *, size_t);
extern void bzero(void *, size_t);

#ifdef TARGET_XBOX
#include <string.h>
#define bcopy(src, dst, size) memcpy(dst, src, size)
#define bzero(dst, size) memset(dst, 0, size)
#endif

#endif /* !_OS_LIBC_H_ */
