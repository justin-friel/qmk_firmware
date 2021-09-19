#include "../../config.h"

#define RGB_AMBER 0xFF, 0xCC, 0x00

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#ifdef LOCKING_SUPPORT_ENABLE
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
    #undef LOCKING_SUPPORT_ENABLE
#endif

#ifdef LOCKING_RESYNC_ENABLE
/* Locking resynchronize hack */
    #undef LOCKING_RESYNC_ENABLE
#endif

#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN
    #define RGBLIGHT_LAYERS
    #undef RGBLED_NUM
    #define RGBLED_NUM 4
#endif
