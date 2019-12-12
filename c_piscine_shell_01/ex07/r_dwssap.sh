#!/bin/sh
cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d':' -f 1 |  rev | sort -r | sed -n -e "7,15 p" | sed "s/$/, /" | tr -d "\n" | sed "s/, $/./g" | tr -d "\n"
