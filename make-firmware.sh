#!/bin/bash

cp keymap.c ../qmk_firmware/keyboards/k_type/keymaps/peteraltosaar/
cd ../qmk_firmware
make k_type/rev1:peteraltosaar
cd -
