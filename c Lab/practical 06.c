#include <stdio.h>

int main() {
    int arr[10];
    int i, sum = 0;

    printf("Enter 10 values for the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

   i)
   // Finding the minimum value
    int min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    ii)
    // Finding the maximum value
    int max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

   iii)
    // Finding the average value
    double average = (double) sum / 10;

    // Reversing the array
    int temp;
    for (i = 0; i < 5; i++) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %lf\n", average);

    printf("Reversed array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
