#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    // Key matrix to LED index
    {
        // Left side
        { 34, 25, 24, 15, 14,  5,  4},
        { 33, 26, 23, 16, 13,  6,  3},
        { 32, 27, 22, 17, 12,  7,  2},
        { 31, 28, 21, 18, 11,  8,  1},
        { 30, 29, 20, 19, 10,  9,  0},

        // Right side
        { 39, 40, 49, 50, 59, 60, 69},
        { 38, 41, 48, 51, 58, 61, 68},
        { 37, 42, 47, 52, 57, 62, 67},
        { 36, 43, 46, 53, 56, 63, 66},
        { 35, 44, 45, 54, 55, 64, 65}
    },
    // LED Index to Physical Position
    {
        // Left side
        {112, 70}, {119, 64}, {112, 58}, {105, 26},  {98, 13},
         {90, 13},  {90, 26},  {90, 38},  {90, 51},  {97, 70},
         {82, 58},  {75, 51},  {75, 38},  {75, 26},  {75, 13},
         {60, 13},  {60, 26},  {60, 38},  {60, 51},  {60, 64},
         {45, 64},  {45, 51},  {45, 38},  {45, 26},  {45, 13},
         {30, 13},  {30, 26},  {30, 38},  {30, 51},  {30, 64},
         {15, 64},  {15, 51},  {15, 38},  {15, 26},  {15, 13},

        // Right side
         {142, 70}, {134, 64}, {142, 58}, {149, 26}, {149, 13},
         {164, 13}, {164, 26}, {164, 38}, {164, 51}, {157, 70},
         {172, 58}, {179, 51}, {179, 38}, {179, 26}, {179, 13},
         {194, 13}, {194, 26}, {194, 38}, {194, 51}, {194, 64},
         {209, 64}, {209, 51}, {209, 38}, {209, 26}, {209, 13},
         {224, 13}, {224, 26}, {224, 38}, {224, 51}, {224, 64},
         {239, 64}, {239, 51}, {239, 38}, {239, 26}, {239, 13}
    },
    // LED Index to Flag
    {
        // Left side
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04,    0x04,    0x04, 0x04,

        // Right side
                    0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
              0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
              0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
        0x04, 0x04,    0x04,    0x04, 0x04, 0x04, 0x04
    }
};

#endif
