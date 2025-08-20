"Para recordar" UwU


- Shell: Es un interprete de comandos que permite al usuario interactuar directamente con el sistema operativo.

- ¿Que hace la shell? - Interpreta tus comandos, los ejecuta y muestra los resultados en la terminal.

- ¿Qué es el Kernel? - Es el núcleo del sistema operativo, el "cerebro" que gestiona los recursos de hardware y software de la computadora.

- PID (Process ID): Es el identificador único de un proceso en ejecución en el sistema operativo.
  
- PPID (Parent Process ID): Es el PID del proceso que lo creó. Es su proceso "padre".
  
- getpid(): Te da el identificador único del proceso actual.

- getppid(): Obtiene el ID del proceso padre y te dice cuál es su proceso de origen.
  
- getline(): Sirve para leer una línea completa de texto.
  
- echo $$: Muestra el PID del Shell actual.
  
- /proc/sys/kernel/pid_max: Indica el PID máximo permitido en Linux.
  
- argc: Es la cantidad de "elementos" que recibe el programa al iniciarse.
  
- argv: Es la lista de los argumentos individuales que el programa recibe.
  
- read(): Toma datos de una fuente (ej: teclado, archivo).
  
- fork(): Crea un nuevo proceso hijo, idéntico al padre.
  
- execve(): Ejecuta un programa dado por ruta completa, recibe argumentos (argv) y variables de entorno (envp).

- execvp(): Igual que execve, pero busca el ejecutable en las rutas del PATH y usa automáticamente el entorno del proceso.
  
- syscall(): Es una petición de un programa al sistema operativo para una tarea en especifico.
  
- Environment (Entorno): Es un conjunto de variables de entorno que proporcionan información y configuración a los programas y al sistema operativo.

- Environ: Es la variable específica (en C) que los programas usan para acceder a ese environment.
  
- strtok(): Sirve para partir un texto largo en pedacitos, usando un separador.
  
- wait(): Hace que un programa espere a que otro termine antes de seguir.

- /bin/ls: Es la ruta absoluta o completa donde se encuentra el programa "ls" en el directorio "/bin".

- ls: Es el nombre del comando que el sistema busca en la variable de entorno PATH.

- wait(): Hace que el proceso padre se bloquee hasta que uno de sus hijos termine, y devuelve el PID de ese hijo.

- waitpid(pid, ... ): Es igual que wait(), pero te permite esperar a un hijo específico.

- stat(): Es una llamada al sistema que obtiene información sobre un archivo que puede ser el (tamaño y tipo del archivo, permisos, fecha de creacion, etc).

- getenv(): Es una función que te permite obtener el valor de una variable de entorno.

- setenv(): Es una función que usan los programas para crear o cambiar el valor de una variable de entorno.

- unsetenv: Es una función que usan los programas para eliminar una variable de entorno existente.

- kill(): Envía una señal a un proceso, generalmente para detenerlo puede ser (inmediata o no) depende de la señal enviada.
