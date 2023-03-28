#include "./nodefree/helpers.h"
#include "./nodefree/keypos_30key.h"
#include "./keycodes.h"

#define DEF 0
#define LWR 1
#define UPR 2
#define NAV 3
#define NUM 4
#define SYM 5
#define SOM 6
#define FUN 7
#define SYS 8

/**
 * Hold-Tap Mods
 */
// ZMK_BEHAVIOR(homerow_mod, hold_tap,
//   flavor = "tap-preferred";
//   tapping-term-ms = <300>;
//   quick-tap-ms = <250>;
//   bindings = <&kp>, <&kp>;
// )
ZMK_BEHAVIOR(hold_tap_mod_left, hold_tap,
  flavor = "balanced";
  tapping-term-ms = <150>;
  quick-tap-ms = <50>;
  global-quick-tap;
  bindings = <&kp>, <&kp>;
  hold-trigger-key-positions = <RIGHT_KEYS THUMBS>;
)

ZMK_BEHAVIOR(hold_tap_mod_right, hold_tap,
  flavor = "balanced";
  tapping-term-ms = <150>;
  quick-tap-ms = <50>;
  global-quick-tap;
  bindings = <&kp>, <&kp>;
  hold-trigger-key-positions = <LEFT_KEYS THUMBS>;
)

#define HTL(LAYER, KEY) &hold_tap_mod_left LAYER KEY 
#define HTR(LAYER, KEY) &hold_tap_mod_right LAYER KEY 

#define HTLG(KEY) HTL(LEFT_GUI, KEY)
#define HTLA(KEY) HTL(LEFT_ALT, KEY)
#define HTLC(KEY) HTL(LEFT_CONTROL, KEY)
#define HTLS(KEY) HTL(LEFT_SHIFT, KEY)

#define HTRG(KEY) HTR(LEFT_GUI, KEY)
#define HTRA(KEY) HTR(LEFT_ALT, KEY)
#define HTRC(KEY) HTR(LEFT_CONTROL, KEY)
#define HTRS(KEY) HTR(LEFT_SHIFT, KEY)

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
 * Alpha / Layer Macros
 */
ZMK_BEHAVIOR(macro_alpha_lwr, macro,
  bindings = <&sl LWR>;
)

ZMK_BEHAVIOR(macro_alpha_upr, macro,
  bindings = <&sl UPR>;
)

ZMK_BEHAVIOR(hold_tap_layer_alpha_lwr, hold_tap,
  flavor = "tap-preferred";
  tapping-term-ms = <220>;
  quick-tap-ms = <250>;
  bindings = <&mo>, <&macro_alpha_lwr>;
)

ZMK_BEHAVIOR(hold_tap_layer_alpha_upr, hold_tap,
  flavor = "tap-preferred";
  tapping-term-ms = <220>;
  quick-tap-ms = <250>;
  bindings = <&mo>, <&macro_alpha_upr>;
)

#define ALPHAL(LAYER) &hold_tap_layer_alpha_lwr LAYER LWR
#define ALPHAU(LAYER) &hold_tap_layer_alpha_upr LAYER 0


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
