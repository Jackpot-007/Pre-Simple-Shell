#include <string.h>
#include <stdio.h>

int main() {

    char str[] = "zapato con cebollas";

    char* token = strtok(str, "  ");
    while (token != NULL) {
        printf(" %s\n", token);
        token = strtok(NULL, "  ");
    }

    return 0;
}
