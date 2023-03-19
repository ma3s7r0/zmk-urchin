/**
F * This file includes custom keycodes for the german input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
*/


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │   │   │   │   │   │   │   │   │   │   │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ Z │   │   │   │   │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CIRC GRAVE // ^ (dead)
#define MAC_CIRC NUBS // ^ (dead | mac)
#define DE_SS   MINUS // ß
#define DE_ACUT EQUAL // ´ (dead)
// Row 2
#define DE_Z    Y    // Z
#define DE_UDIA LBKT // Ü
#define DE_PLUS RBKT // +
// Row 3
#define DE_ODIA SEMI // Ö
#define DE_ADIA SQT  // Ä
#define DE_HASH NUHS // #
// Row 4
#define DE_LABK NUBS // <
#define MAC_LABK GRAVE // < (mac)
#define DE_Y    Z    // Y
#define DE_COMM COMMA // ,
#define DE_DOT  DOT  // .
#define DE_MINS FSLH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_DEG  LS(DE_CIRC) // °
#define MAC_DEG LS(MAC_CIRC) // °
#define DE_EXCL EXCLAMATION    // !
#define DE_DQT  LS(KC_2)    // "
#define DE_SECT LS(KC_3)    // §
#define DE_DLR  DOLLAR    // $
#define DE_PERC LS(5)    // %
#define DE_AMPS LS(6)    // &
#define DE_FSLH LS(7)    // /
#define DE_LPAR LS(N8)    // (
#define DE_RPAR LS(KC_9)    // )
#define DE_EQL  LS(KC_0)    // =
#define DE_QUES LS(KC_SS)   // ?
#define DE_GRV  LS(DE_ACUT) // ` (dead)
// Row 2
#define DE_STAR LS(DE_PLUS) // *
// Row 3
#define DE_SQT  LS(DE_HASH) // '
// Row 4
#define DE_RABK LS(DE_LABK) // >
#define MAC_RABK LS(MAC_LABK) // > (mac)
#define DE_SEMI LS(DE_COMM) // ;
#define DE_COLN LS(DE_DOT)  // :
#define DE_UNDS LS(DE_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_SUP2 RA(DE_2)    // ²
#define DE_SUP3 RA(DE_3)    // ³
#define DE_LBRC RA(DE_7)    // {
#define DE_LBKT RA(DE_8)    // [
#define DE_RBKT RA(DE_9)    // ]
#define DE_RBRC RA(DE_0)    // }
#define DE_BSLH RA(DE_SS)   // (backslash)
// Row 2
#define DE_AT   RA(DE_Q)    // @
#define DE_EURO RA(DE_E)    // €
#define DE_TILD RA(DE_PLUS) // ~
// Row 4
#define DE_PIPE RA(DE_LABK) // |
#define MAC_PIPE RA(MAC_LABK) // | (mac)
#define DE_MICR RA(DE_M)    // µ