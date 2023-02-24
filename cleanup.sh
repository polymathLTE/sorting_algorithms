#!/bin/bash
find . -type f -name '.#*.c*' -delete
find . -type f -name '*~' -delete
find . -type f -name '#*.c*' -delete
find . -type f -exec dos2unix {} \;
