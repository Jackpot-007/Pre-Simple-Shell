Para recordar :V


- Shell: Es un interprete de comandos.

- PID: (Process ID) y es un número único que identifica a cada proceso en ejecución en el sistema.

- PPID: Es el PID del proceso padre del que creó al proceso actual.

- Getppid: Obtiene el ID del proceso padre.

- echo $$: Es un comando en Shell (como Bash) que muestra el PID del proceso actual que es el ID del Shell que estás usando en ese momento.
Desglose:

- echo: Imprime algo en pantalla.
- $$: Es una variante especial que contiene el PID del proceso actual (tu Shell o Script).

- /proc/sys/kernel/pid_max: Es un archivo del sistema Linux que te dice cuál es el número más alto que un proceso puede tener como PID.
