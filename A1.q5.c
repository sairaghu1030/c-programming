#include <stdio.h>

Int main() {
    Char ch;
    Printf(“Enter a character: “);
    Scanf(“%c”, &ch);
    
    If (ch >= ‘A’ && ch <= ‘Z’) {
        Printf(“The character ‘%c’ is an uppercase alphabet.\n”, ch);
    } else if (ch >= ‘a’ && ch <= ‘z’) {
        Printf(“The character ‘%c’ is a lowercase alphabet.\n”, ch);
    } else {
        Printf(“The character ‘%c’ is not an alphabet.\n”, ch);
    }
    
    Return 0;
}

