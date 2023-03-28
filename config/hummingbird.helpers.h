#include "./nodefree/helpers.h"
#include "./nodefree/keypos_30key.h"
#include "./keycodes.h"

#define DEF 0
#define NAV 1
#define NUM 2
#define SYM 3
#define FUN 4
#define SYS 5

/**
 * Keep sticky keys active for a long time so they effectively do not time out
 */
#define STICKY_KEY_TIMEOUT 60000

&sk {
  release-after-ms = <STICKY_KEY_TIMEOUT>;
};

/**
 * Sticky key on tap, normal key on hold
 */
ZMK_BEHAVIOR(not_so_sticky_key, hold_tap,
  flavor = "tap-preferred";
  tapping-term-ms = <200>;
  bindings = <&kp>, <&sk>;
)

#define SK(KEY) &not_so_sticky_key KEY KEY

/**
 * Sticky shift on tap, layer on hold
 */
ZMK_BEHAVIOR(quick_sticky, sticky_key,
  quick-release;
  release-after-ms = <STICKY_KEY_TIMEOUT>;
  bindings = <&kp>;
)

ZMK_BEHAVIOR(sticky_shift_layer, hold_tap,
  flavor = "tap-preferred";
  tapping-term-ms = <200>;
  bindings = <&mo>, <&quick_sticky>;
)

#define SSL(LAYER) &sticky_shift_layer LAYER LSFT

/**
 * Hold-Tap Layers
 */
ZMK_BEHAVIOR(homerow_layer, hold_tap,
  flavor = "balanced";
  tapping-term-ms = <150>;
  quick-tap-ms = <50>;
  global-quick-tap;
  bindings = <&mo>, <&kp>;
)

#define HL(LAYER, KEY) &homerow_layer LAYER KEY 

/**
 * Tap-Hold Keys
 */
#define TAP_HOLD_MACRO(name, hold_binding) \
  ZMK_BEHAVIOR(tap_hold_macro_ ## name, macro, \
    bindings = <&kp hold_binding>; \
  ) \
  ZMK_BEHAVIOR(tap_hold_ ## name , hold_tap, \
    flavor = "tap-preferred"; \
    tapping-term-ms = <120>; \
    bindings = <&tap_hold_macro_ ## name>, <&kp>; \
  )

/**
 * Repeat / Layer Macros
 */
ZMK_BEHAVIOR(hold_tap_layer_repeat, hold_tap,
  flavor = "tap-preferred";
  tapping-term-ms = <220>;
  quick-tap-ms = <250>;
  bindings = <&mo>, <&key_repeat>;
)

#define REPEAT(LAYER) &hold_tap_layer_repeat LAYER 0
