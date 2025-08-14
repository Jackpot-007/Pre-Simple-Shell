#include "main.h"

int main(int ac, char **av) {
	
	char *prompt = "(messi) $ ";
	char *lineptr;
	size_t n = 0;

	(void)ac; (void)av;

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s", lineptr);

	free(lineptr); 
	return (0);
}
