#include <stdio.h>

Int main() {
    Int num;
    
    Printf(“Enter a number: “);
    Scanf(“%d”, &num);
    
    If (num % 5 == 0 && num % 11 == 0) {
        Printf(“%d is divisible by 5 and 11.\n”, num);
    } else {
        Printf(“%d is not divisible by 5 and 11.\n”, num);
    }
    
    Return 0;
}

