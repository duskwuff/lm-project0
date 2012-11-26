#!/usr/bin/env arm-none-eabi-gdb -x
set arm force-mode thumb
target remote | lmgdbserver
