#!/bin/sh
cat/etc/passwd awk 'print {<$1 && >$5' | sed '/^#/d'