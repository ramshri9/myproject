#~!/bin/bash 

gcc -Wall -Werror -c $1.c -o $1.o `mysql_config --cflags --libs`
libfile=lib$1.so
gcc -shared -o $libfile $1.o

#gcc -L/home/shriram/c_sql/ -Wall -o myfirstconnect myfirstconnect.c -ltest `mysql_config --cflags --libs`

