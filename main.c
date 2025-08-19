#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of shell
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *lineptr = NULL; /* Puntero para almacenar la línea leída del uario */
	size_t n = 0; /* Variable para el tamaño del buffer de linept */
	ssize_t input; /* Variable para almacenar el número de caractere leído */

	while (1) /* Bucle infinito para mantener el shell activo */
	{
		printf("Stranger Strings> "); /* Imprime el prompt en la terminal */
		input = getline(&lineptr, &n, stdin); /* Lee la línea de entrada del usuari */

		if (input == -1) /* Verifica si hubo error o fin de archivo (EOF) al leer */
			break; /* Sale del bucle infinito si hay error o EOF */

		if (lineptr[input - 1] == '\n') /* Eliminar salto de linea al final */
			lineptr[input - 1] = '\0'; /* Reemplaza el salto de línea al final por un nulo */

		if (strcmp(lineptr, "exit") == 0) /* Compara si la entrada es "exit" */
			break; /* Sale del bucle si el usuario escribió "exit*/

		if (lineptr[0] == '\0') /* Comprueba si la línea está vac�(primer caracter nulo) */
			continue; /* Salta a la siguiente iteración del bucl */

		prompt(lineptr); /* Llamamos a prompt con la linea que el usuario escribe */
	}

	free(lineptr); /* Libera la memoria asignada a 'lineptr' */
	return (0); /* Finaliza el programa con código de éxi */
}
