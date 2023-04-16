#include <stdio.h>

int main() {
    Char str[100];
    int sum = 0;
    Printf(“Enter the string : “);
    Fgets(str, 100, stdin);

    For(int i = 0; str[i] != ‘\0’; i++) {
        Sum += str[i];
    }

    Printf(“Sum of all characters : %d”, sum);
    Return 0;
}

