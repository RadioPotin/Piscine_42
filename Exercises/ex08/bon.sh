#!/bin/sh
ldapsearch -Q "sn=*bon*" sn | grep "sn" | grep -v "#" | wc -l | tr -d ' '
