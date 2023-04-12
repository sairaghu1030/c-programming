#include <stdio.h>

Int main() {
    Int arr[] = {1, 2, 3, 2, 1, 1, 4};
    Int n = sizeof(arr) / sizeof(arr[0]);
    Int freq[n];
    Int visited[n];
    For (int I = 0; I < n; i++) {
        Freq[i] = 1;
        Visited[i] = 0;
    }
    For (int I = 0; I < n; i++) {
        If (visited[i] == 1) {
            Continue;
        }
        For (int j = I + 1; j < n; j++) {
            If (arr[i] == arr[j]) {
                Freq[i]++;
                Visited[j] = 1;
            }
        }
    }
    Printf(“Element   Frequency\n”);
    For (int I = 0; I < n; i++) {
        If (visited[i] == 0) {
            Printf(“%d  %d\n”, arr[i], freq[i]);
        }
    }

    Return 0;
}

