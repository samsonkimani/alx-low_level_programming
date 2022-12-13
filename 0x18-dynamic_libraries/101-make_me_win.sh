#!/bin/bash
wget -P /tmp/ https://github.com/samsonkimani/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libFct.so
export LD_PRELOAD =/tmp/libFct.so
