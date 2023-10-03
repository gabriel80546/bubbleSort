#!/usr/bin/env bash
PS4='+ $(date "+%Y-%m-%d %T") $BASH_SOURCE:$LINENO: '
set -x

gcc main.c -o main
./main

set +x