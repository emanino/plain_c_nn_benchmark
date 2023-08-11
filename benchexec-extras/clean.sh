#!/usr/bin/env bash

# Find every .i in folder and then remove unsupported features

# No _Float128
find $1 -iname *.i | xargs sed -i -e '/_Float128/,+1d'
