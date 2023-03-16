#pragma once

#if defined(KEYBOARD_oak_proto0)
#    include "proto0.h"
#endif

#include "quantum.h"

/* LAYOUT
 * ┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐
 * │00 ││01 │02 │03 │04 ││05 │06 │07 │08 ││09 │0a │0b │0c ││0d │
 * └───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┴───┴───┴───┘└───┘
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┐
 * │10 │11 │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d     │ │1e │1f │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┤
 * │20   │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d   │ │2e │2f │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┘
 * │30    │31 │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │40      │41 │42 │43 │44 │45 │46 │47 │48 │49 │4a │4b        │ ┌───┐
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┘ │4d │
 * │50  │51  │52  │54                      │58  │59  │5a  │  ┌───┼───┼───┐
 * └────┴────┴────┴────────────────────────┴────┴────┴────┘  │5b │5d │5e │
 *                                                           └───┴───┴───┘
 */
#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D,      \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K1F, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,      K2E, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,      K4D, K2F, \
    K50, K51, K52,      K54,                K58, K59, K5A, K5B,      K5D, K5E  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   KC_NO}, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E  }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K1F, }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   KC_NO, K2E, }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B,   KC_NO, K4D,   K2F  }, \
    { K50,   K51,   K52,   KC_NO, K54,   KC_NO, KC_NO, KC_NO, K58,   K59,   K5A,   K5B,   KC_NO, K5D,   K5E  }, \
}
