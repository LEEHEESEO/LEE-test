#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, temp;

    // Read in 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the numbers using bubble sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted numbers
    printf("Sorted numbers in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]);
    }

    //hellio world!!
    return 0;
}
