#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int count = 0, i;

    // Get input for the main string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    getchar(); // Consume the newline character after the first input

    // Get input for the substring
    printf("Enter a substring: ");
    scanf("%[^\n]s", sub);

    int l1 = strlen(str);
    int l2 = strlen(sub);

    // Find occurrences of the substring
    for (i = 0; i <= l1 - l2; i++) {
        if (strncmp(&str[i], sub, l2) == 0) {
            count++;
            i = i + l2 - 1; // Move past this occurrence to avoid overlap
        }
    }

    // Print the result
    printf("\"%s\" occurs %d times in \"%s\"\n", sub, count, str);

    return 0;
}

