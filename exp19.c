#include <stdio.h>
#include <stdlib.h>

int main() {
    char c, fname1[100], fname2[100];
    FILE *fptr1, *fptr2;

    printf("Enter the filename to open:\n");
    scanf("%s", fname1);
    fptr1 = fopen(fname1, "r");
    if (fptr1 == NULL) {
        printf("Cannot open file %s for reading\n", fname1);
        exit(1);
    }

    printf("Enter the filename to append to:\n");
    scanf("%s", fname2);
    fptr2 = fopen(fname2, "a");
    if (fptr2 == NULL) {
        printf("Cannot open file %s for appending\n", fname2);
        fclose(fptr1);
        exit(1);
    }

    // Read from fptr1 and write to fptr2
    while ((c = fgetc(fptr1)) != EOF) {
        fputc(c, fptr2);
    }

    printf("\nContent of %s appended to %s\n\n\n", fname1, fname2);

    fclose(fptr1);
    fclose(fptr2);

    // Reopen fptr2 for reading and print its content
    fptr2 = fopen(fname2, "r");
    if (fptr2 == NULL) {
        printf("Cannot open file %s for reading\n", fname2);
        exit(1);
    }
    system("clear");
    while ((c = fgetc(fptr2)) != EOF) {
        printf("%c", c);
    }
    printf("\n");

    fclose(fptr2);

    return 0;
}

