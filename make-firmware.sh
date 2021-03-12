#!/bin/bash

printf "String 1:"
read -s string1

printf "\nString 2:"
read -s string2

cp keymap.c ../qmk_firmware/keyboards/k_type/keymaps/peteraltosaar/
cd ../qmk_firmware
sed -i '' 's/STR1_PLACEHOLDER/'$string1'/g' keyboards/k_type/keymaps/peteraltosaar/keymap.c
sed -i '' 's/STR2_PLACEHOLDER/'$string2'/g' keyboards/k_type/keymaps/peteraltosaar/keymap.c
make k_type:peteraltosaar
rm keyboards/planck/keymaps/peteraltosaar/keymap.c
cd -
cp ../qmk_firmware/k_type_peteraltosaar.bin .
