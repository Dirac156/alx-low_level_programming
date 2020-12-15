#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o 100-operations.so
