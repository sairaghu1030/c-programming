#include <stdio.h>

Int main() {
    Int arr[100], n, I, j, temp;

    Printf(“Enter the value of N: “);
    Scanf(“%d”, &n);

    Printf(“Enter the numbers: \n”);
    For (I = 0; I < n; i++) {
        Scanf(“%d”, &arr[i]);
    }
    For (I = 0; I < n – 1; i++) {
        For (j = 0; j < n – I – 1; j++) {
            If (arr[j] < arr[j + 1]) {
                Temp = arr[j];
                Arr[j] = arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
    Printf(“The numbers arranged in descending order are given below:\n”);
    For (I = 0; I < n; i++) {
        Printf(“%d\n”, arr[i]);
    }

    Return 0;
}

