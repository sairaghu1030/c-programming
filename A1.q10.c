#include <stdio.h>

Int main() {
    Int decimal, binary = 0, base = 1, rem;
    Printf(“Enter a decimal number: “);
    Scanf(“%d”, &decimal);

    While (decimal != 0) {
        Rem = decimal % 2;
        Binary = binary + rem * base;
        Decimal /= 2;
        Base *= 10;
    }

    Printf(“The binary equivalent is %d.\n”, binary);

    Return 0;
}

