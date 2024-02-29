// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY 1
#define MIRYOKU_NAV_VI 1

/ {
    macros {
        prev_tab: prev_tab {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&macro_press &kp LCTRL>
                , <&macro_tap &kp PAGE_DOWN>
                , <&macro_release &kp LCTRL>
                ;
        };
        next_tab: next_tab {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&macro_press &kp LCTRL>
                , <&macro_tap &kp PAGE_UP>
                , <&macro_release &kp LCTRL>
                ;
        };
    };
};

#define C01 &prev_tab
#define C02 &next_tab
#define C03 &none
#define C04 &none
#define C05 &none
#define C06 &none

