#!/bin/sh

echo "This script will check whether all benchmarks can be compiled"

echo "Creating tmp folder..."

rm -rf tmp
mkdir tmp
cd tmp

LIBRARIES=`find ../includes -iname *.c`

check_paths ()
{
    echo "Compiling $1 benchmarks..."
    find ../$1 -iname *.c | xargs -L 1 sh -c 'clang -E -I../includes $LIBRARIES $0 || exit 255'
    echo "OK"
}

check_paths properties/reach_prob_density/
check_paths properties/math_functions/
check_paths properties/activation_functions
check_paths properties/reinforcement_learning/

# BROKEN: check_paths properties/hopfield_nets/
# BROKEN: check_paths properties/poly_approx/


