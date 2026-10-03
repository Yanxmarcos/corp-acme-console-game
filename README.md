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
`winmm` (`PlaySound`). El código todavía necesita pequeñas correcciones antes
de poder compilarse con un MinGW actual:

1. Reemplazar o declarar `sleep()` para Windows (por ejemplo, `Sleep(1000)`).
2. Corregir las rutas de audio: varias están escritas como `C:\\archivo.wav` y
   deben ser rutas relativas válidas, por ejemplo `assets/audio/archivo.wav`.
3. Revisar condiciones que asignan valores accidentalmente, como
   `if (contar = 5)`.

## Audio

Los archivos `.wav` no se incluyen en el repositorio por defecto: ocupan cerca
de 156 MiB en conjunto y algunos nombres sugieren que podrían ser música o
efectos de terceros. Si se cuenta con los derechos para redistribuirlos, se
pueden publicar con Git LFS o adjuntarlos a una *release*. En caso contrario,
usa audio propio o libre de licencia y documenta cómo obtenerlo.

## Licencia

Pendiente de elección. Antes de publicar, añade una licencia (por ejemplo MIT)
solo si tienes derecho a licenciar el código y los recursos incluidos.
