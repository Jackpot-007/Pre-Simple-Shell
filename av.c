#include <stdio.h>

/**
 * main - Prints all arguments passed to the program, one per line
 * @ac: Argument count (unused)
 * @av: Argument vector (array of strings)
 * Return: Always 0 (Success)
 */

int main(int ac, char **av) {
	
	int a;

	while (av[a] != NULL) {
		printf("Conteo: %d: %s\n", a, av[a]);
		a++;
	}

	if (av[a] == NULL) {
		printf("Count end: %d: %s\n", a, av[a]);
	return (0);	
	}
	return (0);
}
