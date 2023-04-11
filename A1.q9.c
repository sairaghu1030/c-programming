#include <stdio.h>

Int main() {
    Int num, reverse = 0, digit;
    Printf(“Enter a number: “);
    Scanf(“%d”, &num);

    For (; num != 0; num /= 10) {
        Digit = num % 10;
        Reverse = reverse * 10 + digit;
    }

    Printf(“The reverse of the given number is %d.\n”, reverse);

    Return 0;
}

