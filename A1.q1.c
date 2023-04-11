#include <stdio.h>

Int main() {
    Int num;
    
    Printf(“Enter a number: “);
    Scanf(“%d”, &num);
    
    If (num > 0) {
        Printf(“%d is positive.\n”, num);
    } else if (num < 0) {
        Printf(“%d is negative.\n”, num);
    } else {
        Printf(“%d is zero.\n”, num);
    }
    
    Return 0;
}

