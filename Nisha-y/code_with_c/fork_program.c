// os(linux) fork process
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void printOddNumbers() {
    for (int i = 1; i <= 100; i += 2) {
        printf("%d\n", i);
    }
}

void printEvenNumbers() {
    for (int i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }
}

int main() {
    pid_t pid = fork();//create child process

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) { // Child process
        printOddNumbers();
    } else { // Parent process
        wait(NULL); // Wait for child process to finish
        printEvenNumbers();
    }

    return 0;
}

