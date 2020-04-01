#!/bin/bash

echo "Password:"
read -s password

cp keymap.c ../qmk_firmware/keyboards/k_type/keymaps/peteraltosaar/
cd ../qmk_firmware
sed -i '' 's/PW_PLACEHOLDER/'$password'/g' keyboards/k_type/keymaps/peteraltosaar/keymap.c
make k_type:peteraltosaar
rm keyboards/planck/keymaps/peteraltosaar/keymap.c
cd -
cp ../qmk_firmware/k_type_peteraltosaar.bin .
