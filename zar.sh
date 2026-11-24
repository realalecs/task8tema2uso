#!/bin/bash

limbaj=$1

if [ limbaj == "c" ]; then
        gcc zar.c -o zar && ./zar
elif [ limbaj == "py" ]; then
        python zar.py
fi
