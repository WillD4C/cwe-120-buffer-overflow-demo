# CWE-120 - Classic Buffer Overflow Demo

Demostración educativa de un **Classic Buffer Overflow** realizada en C y ejecutada en una máquina virtual con Kali Linux.

## Herramientas

* Kali Linux
* GCC
* GDB

## Ejecución

Dar permisos al script:

```bash
chmod +x demo.sh
```

Ejecutar:

```bash
./demo.sh
```

Introducir una entrada mayor que el tamaño del búfer para observar cómo los datos pueden sobrescribir memoria adyacente.

## Objetivo

Demostrar cómo una entrada que supera la capacidad de un búfer puede provocar la sobrescritura de datos almacenados en memoria.

## Archivos

* `demo.c` — Código fuente de la demostración.
* `demo.sh` — Script para compilar y ejecutar el programa.

> Proyecto realizado con fines educativos y en un entorno controlado.
