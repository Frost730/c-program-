#include <stdio.h>

int main() {
    int i, j, k, n, s;
    printf("Enter number of rows:");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (s = 1; s <= n - i; s++) {
            printf(" ");
        }
        
        // Print increasing numbers
        k = i;
        for (j = 1; j <= i; j++) {
            printf("%d", k++);
        }
        
        // Print decreasing numbers
        k = 2 * i - 2;
        for (j = 1; j < i; j++) {
            printf("%d", k--);
        }
        
        printf("\n");
    }
    
    return 0;
}
// pyramid
// alternative
#include <stdio.h>

int main() {
    int i, j, a = 0, n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a = i - 1;  // Reset 'a' to the starting value for each row
        for (j = 1; j <= n - i; j++) {
            printf(" ");  // Print leading spaces
        }

        for (j = 1; j <= i; j++) {
            printf("%d", ++a);  // Print increasing numbers
        }

        for (j = 1; j < i; j++) {
            printf("%d", --a);  // Print decreasing numbers
        }

        printf("\n");
    }

//     return 0;
// }


