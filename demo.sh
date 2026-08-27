#!/bin/bash

echo "Compilando demo..."

gcc -g -O0 -fno-stack-protector -no-pie demo.c -o demo

if [ $? -ne 0 ]; then
    echo "Error al compilar."
    exit 1
fi

echo "Compilación correcta."
echo

./demo
