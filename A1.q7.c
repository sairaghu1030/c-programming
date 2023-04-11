#include <stdio.h>

Int main() {
    Int num, count = 0;
    Printf(“Enter a number: “);
    Scanf(“%d”, &num);

    While (num != 0) {
        Count++;
        Num /= 10;
    }

    Printf(“The number of digits in the given integer is %d.\n”, count);

    Return 0;
}

