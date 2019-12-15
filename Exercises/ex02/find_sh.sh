#!/bin/sh
find . -type f -iname "*.sh" | sed 's/.*\///g' | rev | cut -c4- | rev
