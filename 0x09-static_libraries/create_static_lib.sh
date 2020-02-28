#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra *.c holberton.h
ar -rc liball.a *.o
