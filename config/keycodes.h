#define XXXXXXXXXXX &none
#define ___________ &none

/**
 * Undefine deprecated keys that I'm redefining below
 */
#undef LCTL
#undef RCTL
#undef LSFT
#undef RSFT
#undef UNDO
#undef COPY
#undef CUT
#undef PGUP
#undef PGDN

/**
 * Nice and short versions of all the mods
 */
#define LCTL        LCTRL
#define RCTL        RCTRL
#define LSFT        LSHFT
#define RSFT        RSHFT

/**
 * Various composed keys
 */
#define MISSION     LS(LC(LA(LG(N8))))
#define NEXTWIN     LG(NON_US_BACKSLASH)
#define DESKSWP     LS(LC(LA(LGUI)))

#define TABL        LS(LG(LEFT_BRACKET))
#define TABR        LS(LG(RIGHT_BRACKET))

#define UNDO        LG(Z)
#define REDO        LS(LG(Z))
#define COPY        LG(C)
#define PASTE       LG(V)
#define CUT         LG(X)
#define SELECT      LG(A)

#define SCRSH       LS(LG(N4))

/**
 * Renamed shorter versions of keys
 */
#define PGUP        PG_UP
#define PGDN        PG_DN

/**
 * Alias for simple keys
 */
#define BRIMN       F14
#define BRIMX       F15


/**
 * Danish!
 */
#define ARING       RA(A)
#define OSLSH       RA(O)
#define AELIG       RA(SINGLE_QUOTE)


/**
 * Legacy keys
 */


#define ___LGUI____ &kp LGUI
#define ___RGUI____ &kp RGUI
#define ___LALT____ &kp LALT
#define ___RALT____ &kp RALT
#define ___LCTL____ &kp LCTRL
#define ___RCTL____ &kp RCTRL
#define ___LSFT____ &kp LSHFT
#define ___RSFT____ &kp RSHFT

#define ___UNDO____ &kp LG(Z)
#define ___REDO____ &kp LS(LG(Z))
#define ___COPY____ &kp LG(C)
#define ___PASTE___ &kp LG(V)
#define ____CUT____ &kp LG(X)
#define __SELECT___ &kp LG(A)

#define ___LEFT____ &kp LEFT
#define ____UP_____ &kp UP
#define ___DOWN____ &kp DOWN
#define ___RIGHT___ &kp RIGHT
#define ___PGUP____ &kp PG_DN
#define ___PGDN____ &kp PG_UP

#define ___SPACE___ &kp SPACE
#define ____TAB____ &kp TAB
#define ___ENTER___ &kp ENTER
#define ___BKSPC___ &kp BACKSPACE
#define ____DEL____ &kp DELETE
#define ____ESC____ &kp ESC

#define _____A_____ &kp A
#define _____B_____ &kp B
#define _____C_____ &kp C
#define _____D_____ &kp D
#define _____E_____ &kp E
#define _____F_____ &kp F
#define _____G_____ &kp G
#define _____H_____ &kp H
#define _____I_____ &kp I
#define _____J_____ &kp J
#define _____K_____ &kp K
#define _____L_____ &kp L
#define _____M_____ &kp M
#define _____N_____ &kp N
#define _____O_____ &kp O
#define _____P_____ &kp P
#define _____Q_____ &kp Q
#define _____R_____ &kp R
#define _____S_____ &kp S
#define _____T_____ &kp T
#define _____U_____ &kp U
#define _____V_____ &kp V
#define _____W_____ &kp W
#define _____X_____ &kp X
#define _____Y_____ &kp Y
#define _____Z_____ &kp Z

#define ___ARING___ &kp RA(A)
#define ___OSLSH___ &kp RA(O)
#define ___AELIG___ &kp RA(SINGLE_QUOTE)

#define ___COMMA___ &kp COMMA
#define ___UNDRS___ &kp UNDERSCORE
#define ___MINUS___ &kp MINUS
#define ___PLUS____ &kp PLUS
#define ___COLON___ &kp COLON
#define ___SEMI____ &kp SEMICOLON
#define ___PIPE____ &kp PIPE
#define ___GRAVE___ &kp GRAVE
#define ___EQUAL___ &kp EQUAL
#define ___DOT_____ &kp DOT
#define ___AMP_____ &kp AMPERSAND
#define ___SLASH___ &kp SLASH
#define ___STAR____ &kp STAR
#define ___SQUOT___ &kp SINGLE_QUOTE
#define ___DQUOT___ &kp DOUBLE_QUOTES
#define ___EXCLM___ &kp EXCLAMATION
#define ___QUEST___ &kp QUESTION

#define _____0_____ &kp N0
#define _____1_____ &kp N1
#define _____2_____ &kp N2
#define _____3_____ &kp N3
#define _____4_____ &kp N4
#define _____5_____ &kp N5
#define _____6_____ &kp N6
#define _____7_____ &kp N7
#define _____8_____ &kp N8
#define _____9_____ &kp N9

#define ___BRIMN___ &kp F14
#define ___BRIMX___ &kp F15

#define ___SCRSH___ &kp LS(LG(N4))

#define ___BTCLR___ &bt BT_CLR
#define ___BT_00___ &bt BT_SEL 0
#define ___BT_01___ &bt BT_SEL 1
#define ___BT_02___ &bt BT_SEL 2

// short versions used for macro definitions
#define __A__ &kp A
#define __B__ &kp B
#define __C__ &kp C
#define __D__ &kp D
#define __E__ &kp E
#define __F__ &kp F
#define __G__ &kp G
#define __H__ &kp H
#define __I__ &kp I
#define __J__ &kp J
#define __K__ &kp K
#define __L__ &kp L
#define __M__ &kp M
#define __N__ &kp N
#define __O__ &kp O
#define __P__ &kp P
#define __Q__ &kp Q
#define __R__ &kp R
#define __S__ &kp S
#define __T__ &kp T
#define __U__ &kp U
#define __V__ &kp V
#define __W__ &kp W
#define __X__ &kp X
#define __Y__ &kp Y
#define __Z__ &kp Z
