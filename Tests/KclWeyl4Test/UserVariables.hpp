#ifndef USERVARIABLES_HPP
#define USERVARIABLES_HPP

// TODO: This file can be auto-generated from a list of variable names
// Also, we should probably scope this enum too...
//
enum
{

    c_Weyl4_Re,
    c_Weyl4_Im,

    c_chi,

    c_h,
    c_h11 = c_h,
    c_h12,
    c_h13,
    c_h22,
    c_h23,
    c_h33,

    c_K,

    c_A,
    c_A11 = c_A,
    c_A12,
    c_A13,
    c_A22,
    c_A23,
    c_A33,

    c_Theta,

    c_Gamma,
    c_Gamma1 = c_Gamma,
    c_Gamma2,
    c_Gamma3,

    c_lapse,

    c_shift,
    c_shift1 = c_shift,
    c_shift2,
    c_shift3,

    c_B,
    c_B1 = c_B,
    c_B2,
    c_B3,

    c_phi,
    c_Pi,

    c_Rho,

    c_chi2,

    NUM_VARS
};

namespace UserVariables
{
static constexpr char const *variable_names[NUM_VARS] = {
    "ReWeyl4", "ImWeyl4",

    "chi",

    "h11",     "h12",     "h13",    "h22", "h23", "h33",

    "K",

    "A11",     "A12",     "A13",    "A22", "A23", "A33",

    "Theta",

    "Gamma1",  "Gamma2",  "Gamma3",

    "lapse",

    "shift1",  "shift2",  "shift3",

    "B1",      "B2",      "B3",

    "phi",     "Pi",

    "rho",

    "chi2"

    //        "Ham",
    //        "Mom1",
    //        "Mom2",
    //        "Mom3"
};
}

#endif /* USERVARIABLES_HPP */
