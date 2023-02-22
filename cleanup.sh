#!/bin/bash
find . -type f -name '#*.c*' '.#*.c*' '*~' -delete
find . -type f -exec dos2unix {} \;
