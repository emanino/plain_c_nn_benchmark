# SV-Benchmarks demands that every header have this SPDX annotation

header="// This file is part of the SV-Benchmarks collection of verification tasks:
// [https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks](https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks)
//
// SPDX-FileCopyrightText: 2023 Edoardo Manino
//
// SPDX-License-Identifier: MIT

"

for file in *.c *.i; do
    # Create a temp file with the header, then append the original file contents
    printf '%s\n' "$header" > "${file}.tmp"
    cat "$file" >> "${file}.tmp"
    mv "${file}.tmp" "$file"
done
