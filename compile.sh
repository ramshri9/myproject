#!/bin/bash
#gcc $1.c -o $1 `mysql_config --cflags --libs`
gcc -L/home/shriram/c_sql/ -Wall -o $1 $1.c -ltest `mysql_config --cflags --libs`

