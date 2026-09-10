* **`<iostream>`**: Es la librería estándar de E/S (Entrada/Salida) en C++. Define objetos fundamentales como `cin` (entrada por teclado), `cout` (salida a consola), `cerr` y `clog`. Trabaja mediante el uso de flujos (*streams*).
* **`<stdlib.h>` / `<cstdlib>`**: Librería estándar de utilidades generales en C/C++. Contiene funciones para gestión de memoria dinámica (`malloc`, `free`), control de procesos (`exit`), conversión de tipos (`atoi`, `atof`), y generación de números aleatorios (`rand`, `srand`).
* **`<stdio.h>` / `<cstdio>`**: Librería de Entrada/Salida heredada del lenguaje C tradicional. Ofrece funciones basadas en formato como `printf`, `scanf`, `fopen`, `fclose`, `gets` y `puts`.
* **`<iomanip>`**: Librería de manipulación de flujos de entrada y salida. Permite formatear la presentación de datos en consola mediante manipuladores como `setw`, `setfill`, `setprecision`, `left` y `right`.

---

## 2. Análisis del Ejercicio 2: ¿Cuál manipulador ha servido mejor?

Al comparar el uso exclusivo de `setw` frente a la combinación de `setw`, `left`, `right` y `setfill`:

1. **Facilidad y Limpieza:** El uso aislado de `setw` resulta suficiente para tablas sencillas, pero tiende a alinear todo el contenido por defecto a la derecha, lo cual descuadra el texto (como los nombres de los equipos).
2. **Resultado Visual Superior:** La combinación de **`left`** y **`right`** junto con **`setw`** sirvió mucho mejor. Permite alinear el texto descriptivo a la izquierda y los valores numéricos (PJ, PG, PP, Pts) a la derecha, logrando una presentación profesional y ordenada típica de tablas estadísticas.
3. **Puntuación y Divisiones:** El uso de **`setfill('-')`** facilitó la creación de líneas divisoras continuas sin necesidad de escribir cadenas de guiones manualmente.

**Conclusión:** La combinación de **`left` + `right` + `setw`** es la mejor opción para la representación de datos tabulares.
