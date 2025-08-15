#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	pid_t pid;
	int status;

	for (int i = 0; i < 5; i++) {
		pid = fork(); // Create a new child process

		if (pid < 0) {
			// Fork failed

			perror("fork failed");
			exit(EXIT_FAILURE);
		} else if (pid == 0) {
			// This is the child process

			printf("Child process %d (PID: %d) executing ls -l /tmp...\n", i + 1, getpid());
			execlp("ls", "ls", "-l", "/tmp", NULL); // Execute ls -l /tmp
			// If execlp returns, an error occurred

			perror("execlp failed");
			exit(EXIT_FAILURE);
		} else {
			// This is the parent process

			printf("Parent process (PID: %d) waiting for child %d (PID: %d) to exit...\n", getpid(), i + 1, pid);
			waitpid(pid, &status, 0); // Wait for the specific child process to exit
			printf("Child process %d (PID: %d) exited with status %d.\n", i + 1, pid, status);
		}
	}

	printf("All child processes have completed.\n");
	return 0;
}
