#ifndef _VERIFICATION_FUNCTIONS_H
#define _VERIFICATION_FUNCTIONS_H

// Functions for verification (harness).
// Mainly consists of assume, reach_error, and nondets
// See: https://sv-comp.sosy-lab.org/2023/rules.php

extern float __VERIFIER_nondet_float();
extern void __VERIFIER_assume(int cond);
extern void reach_error();

inline void __VERIFIER_assert(int cond) {
  if(!cond)
    reach_error();
}

#endif
