#include <stdio.h>
#include <limits.h>

Int minJumps(int arr[], int n) {
    If (n <= 1 || arr[0] == 0) {
        Return -1;
    }
    Int maxReach = arr[0], steps = arr[0], jumps = 1;
    For (int I = 1; I < n; i++) {
        If (I == n – 1) {
            Return jumps;
        }
        maxReach = (maxReach > I + arr[i]) ? maxReach : I + arr[i];
        Steps--;
        If (steps == 0) {
            Jumps++;
            If (I >= maxReach) {
                Return -1;
            }
            Steps = maxReach – I;
        }
    }
    
    Return -1;
}

Int main() {
    Int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    Int n = sizeof(arr) / sizeof(arr[0]);
    Int jumps = minJumps(arr, n);
    
    If (jumps == -1) {
        Printf(“The end is not reachable.\n”);
    } else {
        Printf(“The minimum number of jumps to reach the end is %d.\n”, jumps);
    }
    
    Return 0;
}

