#include<stdio.h>

int fact(int);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("factorial = %d\n", fact(n));
    return 0; 
}

int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
// factorial 

