#!/bin/sh

cat /etc/passwd | grep -v '#' | cut -d : -f1 | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | tr '\n' ',' | sed -e 's/,/, /g' | sed -e 's/, $/./g' | tr -d '\n'
