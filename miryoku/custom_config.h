// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY 1
#define MIRYOKU_NAV_VI 1

#define NEXT_TAB &kp LC(PAGE_DOWN)
#define PREV_TAB &kp LC(PAGE_UP)
#define HX_SWAP &kp LA(SEMICOLON)

/ {
    macros {
        tmux_scroll: tmux_scroll {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&macro_press &kp LEFT_CONTROL>
                , <&macro_tap &kp B>
                , <&macro_release &kp LEFT_CONTROL>
                , <&macro_tap &kp LEFT_BRACKET>
                ;
        };
    };
};

#define C01 NEXT_TAB
#define C02 PREV_TAB
#define C03 &kp K_BACK
#define C04 HX_SWAP
#define C05 &caps_word
#define C06 &tmux_scroll

