#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];

    // Write to file
    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, this is a file I/O example.\n");
    fclose(fptr);

    // Read from file
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Reading from file:\n");
    while (fgets(data, sizeof(data), fptr)) {
        printf("%s", data);
    }
    fclose(fptr);

    return 0;
}
