#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Please provide two integers as command-line arguments\n");
        return 1;
    }

    int a = atoi(argv[1]);  // Convert string to integer
    int b = atoi(argv[2]);

    printf("Sum: %d\n", a + b);

    return 0;
}
