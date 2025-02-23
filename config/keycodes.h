#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/outputs.h>

// LAYERS
#define _GAMING 1
#define _NAV    2
#define _SYMBOL 3
#define _ADJUST 4

#define GAMING &tog _GAMING
#define NAV &mo _NAV
#define SYMBOL &mo _SYMBOL
#define ADJUST &mo _ADJUST

#define SYM_TAB &lt _SYMBOL TAB

// CUSTOM
#define CAPSWRD &caps_word

// Left-hand home row mods
#define GUI_A  &hm LGUI  A
#define ALT_S  &hm RALT  S
#define CTRL_D &hm LCTRL D
#define SHFT_F &hm LSHFT F

// Right-hand home row mods
#define SHFT_J   &hm RSHFT J
#define CTRL_K   &hm RCTRL K
#define ALT_L    &hm RALT  L
#define GUI_SEMI &hm RGUI  SEMI

// Combo-mods
#define MEH_FSLH &hm LS(LC(LALT)) FSLH

// SPECIAL
#define XXXX &none
#define ____ &trans

// ALPHANUM
#define KC_A &kp A
#define KC_B &kp B
#define KC_C &kp C
#define KC_D &kp D
#define KC_E &kp E
#define KC_F &kp F
#define KC_G &kp G
#define KC_H &kp H
#define KC_I &kp I
#define KC_J &kp J
#define KC_K &kp K
#define KC_L &kp L
#define KC_M &kp M
#define KC_N &kp N
#define KC_O &kp O
#define KC_P &kp P
#define KC_Q &kp Q
#define KC_R &kp R
#define KC_S &kp S
#define KC_T &kp T
#define KC_U &kp U
#define KC_V &kp V
#define KC_W &kp W
#define KC_X &kp X
#define KC_Y &kp Y
#define KC_Z &kp Z
#define KC_N1 &kp N1
#define KC_N2 &kp N2
#define KC_N3 &kp N3
#define KC_N4 &kp N4
#define KC_N5 &kp N5
#define KC_N6 &kp N6
#define KC_N7 &kp N7
#define KC_N8 &kp N8
#define KC_N9 &kp N9
#define KC_N0 &kp N0

// ARROWS
#define KC_LEFT &kp LEFT
#define KC_DOWN &kp DOWN
#define KC_UP &kp UP
#define KC_RIGHT &kp RIGHT

// SPECIAL CHARACTERS
#define KC_AMPS &kp AMPS
#define KC_AT &kp AT
#define KC_BSLH &kp BSLH
#define KC_BSPC &kp BSPC
#define KC_CARET &kp CARET
#define KC_COMMA &kp COMMA
#define KC_DEL &kp DEL
#define KC_DLLR &kp DLLR
#define KC_DOT &kp DOT
#define KC_DQT &kp DQT
#define KC_EQUAL &kp EQUAL
#define KC_ESC &kp ESC
#define KC_EXCL &kp EXCL
#define KC_FSLH &kp FSLH
#define KC_GRAVE &kp GRAVE
#define KC_GT &kp GT
#define KC_HASH &kp HASH
#define KC_LBKT &kp LBKT
#define KC_LBRC &kp LBRC
#define KC_LPAR &kp LPAR
#define KC_LT &kp LT
#define KC_MINUS &kp MINUS 
#define KC_PIPE &kp PIPE
#define KC_PLUS &kp PLUS
#define KC_PRCNT &kp PRCNT
#define KC_RBKT &kp RBKT
#define KC_RBRC &kp RBRC
#define KC_RET &kp RET
#define KC_RPAR &kp RPAR
#define KC_SEMI &kp SEMI
#define KC_SPACE &kp SPACE
#define KC_SQT &kp SQT
#define KC_STAR &kp STAR
#define KC_TAB &kp TAB
#define KC_TILDE &kp TILDE
#define KC_UNDER &kp UNDER

// F KEYS
#define KC_F1 &kp F1
#define KC_F2 &kp F2
#define KC_F3 &kp F3
#define KC_F4 &kp F4
#define KC_F5 &kp F5
#define KC_F6 &kp F6
#define KC_F7 &kp F7
#define KC_F8 &kp F8
#define KC_F9 &kp F9
#define KC_F10 &kp F10
#define KC_F11 &kp F11
#define KC_F12 &kp F12

// MODS
#define KC_LGUI  &kp LGUI
#define KC_LALT  &kp LALT
#define KC_LCTRL &kp LCTRL
#define KC_LSHFT &kp LSHFT
#define KC_RGUI  &kp RGUI
#define KC_RALT  &kp RALT
#define KC_RCTRL &kp RCTRL
#define KC_RSHFT &kp RSHFT

// OUTPUTS
#define USB_BT &out OUT_TOG

// BLUETOOTH
#define BT__CLR &bt BT_CLR
#define BT_SEL1 &bt BT_SEL 0
#define BT_SEL2 &bt BT_SEL 1
#define BT_SEL3 &bt BT_SEL 2
#define BT_SEL4 &bt BT_SEL 3
#define BT_SEL5 &bt BT_SEL 4

// SYSTEM
#define REBOOT &bootloader
