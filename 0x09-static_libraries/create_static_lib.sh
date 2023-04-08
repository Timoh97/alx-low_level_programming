#!/bin/bash
gcc *.c
ar -rc liball.a *.o
ar -rcs liball.a *.o
