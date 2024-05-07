#pragma once

#include "tock.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DRIVER_NUM_EUI64 0x30006
#define EUI64_CMD_GETTER 1

bool libtock_eui64_exists(void);
returncode_t libtock_eui64_command_get(uint64_t *eui64);

// Obtain eui64 as `uint64_t` if supported.
returncode_t libtock_eui64_get(uint64_t *eui64);

#ifdef __cplusplus
}
#endif
