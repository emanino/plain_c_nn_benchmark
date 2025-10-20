#!/usr/bin/env bash

# Find every .i in folder and then remove unsupported features
# TODO: we could definetely use a loop or combine all the seds into one.

# No _Float128
find $1 -iname *.i | xargs sed -i -e '/_Float128/,+1d'

# No gcc malloc stuff (clang does not support this)
find $1 -iname *.i | xargs sed -i -e 's/__attribute__ ((__malloc__)))/ /g'
find $1 -iname *.i | xargs sed -i -e 's/__attribute__ ((__malloc__ (__builtin_free, 1)))/ /g'
find $1 -iname *.i | xargs sed -i -e 's/__attribute__ ((__malloc__ (reallocarray, 1)))/ /g'
find $1 -iname *.i | xargs sed -i -e 's/__attribute__ ((__malloc__ (fclose, 1)))/ /g'
find $1 -iname *.i | xargs sed -i -e 's/__attribute__ ((__malloc__ (pclose, 1)))/ /g'


# No const attributes
find $1 -iname *.i | xargs sed -i -e 's/ __attribute__ ((__const__))/ /g'
