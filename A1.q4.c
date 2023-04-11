#include <stdio.h>
#include <string.h>

Int main() {
    Char str[100];
    Int count = 0;
    
    Printf(“Enter a string: “);
    Fgets(str, sizeof(str), stdin);
    
    For (int I = 0; I < strlen(str); i++) {
        If (str[i] == ‘a’ || str[i] == ‘e’ || str[i] == ‘I’ || str[i] == ‘o’ || str[i] == ‘u’ || str[i] == ‘A’ || str[i] == ‘E’ || str[i] == ‘I’ || str[i] == ‘O’ || str[i] == ‘U’) {
            Count++;
        }
    }
    
    Printf(“The number of vowels in the string is: %d\n”, count);
    
    Return 0;
}

