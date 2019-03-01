#!/bin/bash

cp keymap.c ../qmk_firmware/keyboards/k_type/keymaps/peteraltosaar/
cd ../qmk_firmware
make k_type:peteraltosaar
cd -
cp ../qmk_firmware/k_type_peteraltosaar.bin .
