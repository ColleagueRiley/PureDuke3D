#define cdecl
#define __far
#define __interrupt

#define far
#define interrupt

#if defined(_WIN32)
#define PLATFORM_WIN32
#elif defined(__unix__) && !defined(__APPLE__)
#define PLATFORM_UNIX
#elif defined(__APPLE__)
#define PLATFORM__APPLE
#endif

#include <stdint.h>
#include <stdbool.h>

typedef uint32_t    enet_uint32;
typedef uint16_t    enet_uint16;
typedef uint8_t     enet_uint8;
typedef uint8_t     Uint8;
typedef uint32_t    uint32;
typedef int32_t     int32;
typedef int32_t     Pint32_t;
typedef uint32_t    Uint32_t;
typedef uint32_t    PUint32_t;
typedef uint8_t kb_scancode;