#include <stdio.h>

Int main() {
    Int amount, notes;
    Printf(“Enter the amount: “);
    Scanf(“%d”, &amount);

    Notes = amount / 500; // number of Rs. 500 notes
    Amount %= 500; // remaining amount after Rs. 500 notes

    Notes += amount / 100; // number of Rs. 100 notes
    Amount %= 100; // remaining amount after Rs. 100 notes

    Notes += amount / 50; // number of Rs. 50 notes
    Amount %= 50; // remaining amount after Rs. 50 notes

    Notes += amount / 20; // number of Rs. 20 notes
    Amount %= 20; // remaining amount after Rs. 20 notes

    Notes += amount / 10; // number of Rs. 10 notes
    Amount %= 10; // remaining amount after Rs. 10 notes

    Notes += amount / 5; // number of Rs. 5 notes
    Amount %= 5; // remaining amount after Rs. 5 notes

    Notes += amount / 2; // number of Rs. 2 notes
    Amount %= 2; // remaining amount after Rs. 2 notes

    Notes += amount; // number of Rs. 1 notes

    Printf(“The minimum number of notes required is %d.\n”, notes);

    Return 0;
}

