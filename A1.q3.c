#include <stdio.h>

Int main() {
    Char ch;
    
    Printf(“Enter a character: “);
    Scanf(“%c”, &ch);
    
    If ((ch >= ‘a’ && ch <= ‘z’) || (ch >= ‘A’ && ch <= ‘Z’)) {
        Printf(“%c is an alphabet.\n”, ch);
    } else {
        Printf(“%c is not an alphabet.\n”, ch);
    }
    
    Return 0;
}

