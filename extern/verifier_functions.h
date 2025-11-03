#ifndef _VERIFICATION_FUNCTIONS_H
#define _VERIFICATION_FUNCTIONS_H

#include <stdlib.h> // for abort
#include <assert.h> // for assert
// Functions for verification (harness).
// Mainly consists of assume, reach_error, and nondets
// See: https://sv-comp.sosy-lab.org/2023/rules.php

float __VERIFIER_nondet_float();
#define __VERIFIER_assume(cond) if(!(cond)) abort();
inline void reach_error() { assert(0); }

#define __VERIFIER_assert(cond) if(!(cond)) reach_error()

#endif
