#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 1024

int main() {
    char command[MAX_COMMAND_LENGTH];
    pid_t pid;
    int status;

    while (1) {
        printf("Messi> "); // Prompt
        if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL) {
            break; // Exit on EOF or error
        }

        // Remove trailing newline character if present
        command[strcspn(command, "\n")] = 0;

        if (strlen(command) == 0) {
            continue; // Skip empty commands
        }

        pid = fork(); // Create a child process

        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) { // Child process
            char *argv[] = {command, NULL}; // Command as the only argument
            execve(command, argv, NULL); // Execute the command
            perror("execve"); // Only reaches here if execve fails
            exit(EXIT_FAILURE);
        } else { // Parent process
            waitpid(pid, &status, 0); // Wait for the child process to finish
        }
    }

    return 0;
}
