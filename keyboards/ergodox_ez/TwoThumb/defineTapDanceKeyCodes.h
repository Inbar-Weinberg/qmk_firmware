enum tap_dance_codes {
    // heb endings
    DNC_NUN,   // 0
    DNC_TSDI,  // 1
    DNC_KAF,   // 2
    DNC_MEM,   // 3
    DNC_PE,    // 4

    // macros
    DNC_PRT_SCRN,  // 5
    DNC_COPY_CUT,  // 6

    // English []{}
    DNC_7_LSQB,  // 11
    DNC_8_RSQB,  // 12
    DNC_2_RCRB,  // 14
    DNC_1_LCRB,  // 15

    // Hebrew []{}
    DNC_7H_LSQB,
    DNC_8H_RSQB,
    DNC_1H_LCRB,
    DNC_2H_RCRB,

    // lyx layer
    DNC_F_CTRLM,
    DNC_D_ALTM,
    DNC_J_CTRLM,
    DNC_K_ALTM,

    // lyx numbers
    DNC_PLS_CTRLM,
    DNC_EQL_ALTM,
    DNC_4_CTRLM,
    DNC_5_ALTM,

    // hebrew language macros
    DNC_LANG_HEB,

    TAP_DANCE_ENUM_LAST,
};
