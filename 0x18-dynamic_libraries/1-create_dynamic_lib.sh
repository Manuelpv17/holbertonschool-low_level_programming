#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o