#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s filename ...\n", argv[0]);
        return 1;
    }

    char *path_env = getenv("PATH");
    if (path_env == NULL) {
        fprintf(stderr, "PATH environment variable not found.\n");
        return 1;
    }

    // Duplicate path_env as strtok modifies the string
    char *path_copy = strdup(path_env);
    if (path_copy == NULL) {
        perror("strdup");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char *filename = argv[i];
        char *dir = strtok(path_copy, ":"); // Use ":" for Unix

        int found = 0;
        while (dir != NULL) {
            char full_path[1024]; // Adjust buffer size as needed
            snprintf(full_path, sizeof(full_path), "%s/%s", dir, filename);

            if (access(full_path, F_OK) == 0) { // Use _access() on Windows
                printf("%s\n", full_path);
                found = 1;
                break;
            }
            dir = strtok(NULL, ":"); // Continue tokenizing
        }

        if (!found) {
            fprintf(stderr, "%s: not found in PATH\n", filename);
        }
        // Reset path_copy for the next filename
        free(path_copy);
        path_copy = strdup(path_env);
        if (path_copy == NULL) {
            perror("strdup");
            return 1;
        }
    }

    free(path_copy);
    return 0;
}
