#include <stdio.h>

Int main() {
    Int num, sum = 0, digit;
    Printf(“Enter a number: “);
    Scanf(“%d”, &num);

    For (; num != 0; num /= 10) {
        Digit = num % 10;
        Sum += digit;
    }

    Printf(“The sum of digits of the given number is %d.\n”, sum);

    Return 0;
}

