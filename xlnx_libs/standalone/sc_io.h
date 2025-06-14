#ifndef SC_IO_H
#define SC_IO_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* These functions need to be implemented for your specific platform */
static inline uint32_t SC_In32(uintptr_t addr) {
    return *(volatile uint32_t *)addr;
}

static inline void SC_Out32(uintptr_t addr, uint32_t data) {
    *(volatile uint32_t *)addr = data;
}

#ifdef __cplusplus
}
#endif

#endif /* SC_IO_H */ 