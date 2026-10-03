# Corp ACME

Proyecto de consola en C++ desarrollado durante el primer ciclo universitario.
Incluye menús y minijuegos, entre ellos **Memory Trainer**, **Flash Anzan** y
una historia interactiva.

## Contenido versionado

- `Corp Cpp.cpp`: código fuente principal.
- `datos/`: datos iniciales usados para nombres, niveles y puntuaciones.
- `Makefile.win`: configuración histórica de Dev-C++/MinGW.
- `Proyecto3.ico`, `Proyecto3_private.h` y `Proyecto3_private.rc`: recursos del proyecto.

## Requisitos y estado actual

El programa fue pensado para Windows y utiliza `windows.h`, `conio.h` y
`winmm` (`PlaySound`).

## Audio

Los archivos `.wav` no se incluyen en el repositorio por defecto; ocupan cerca
de 156 MiB en conjunto.
