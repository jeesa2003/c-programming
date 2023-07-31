1. #include <stdio.h>
int main() {
    int num = 0;
    while (num <= 100) {
        printf("%d ", num);
        num++;
    }
}

#include <stdio.h>
int main() {
    int num = 0;
    do {
        printf("%d ", num);
        num++;
    } while (num <= 100);
}

#include <stdio.h>
int main() {
    int num;
    for (num = 0; num <= 100; num++) {
        printf("%d ", num);
    }
}

2. #include <stdio.h>

int main() {
    int marks;
    int i, total = 0;
    float average;
    printf("Enter 10 marks:\n");
    for (i = 1; i <= 10; i++) {
        printf("Mark %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }
    average = (float)total / 10;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }
}
3.
5. #include <stdio.h>
int main() {
    int orgNum, revNum = 0;
    printf("Enter a Number: ");
    scanf("%d", &orgNum);
    int remainder;
    do {
        remainder = orgNum % 10;
        revNum = revNum * 10 + remainder;
        orgNum /= 10;
    } while (orgNum != 0);
    printf("Reversed Number: %d\n", revNum);
}

6. #include <stdio.h>
int main() {
    int base, exponent;
    int result = 1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    int i;
    for (i = 1; i <= exponent; i++) {
        result *= base;
    }
    printf("%d\n", result);
}

7.
8.
9. #include <stdio.h>
int main() {
    char characters;
    printf("ASCII values for characterss A to Z:\n");
    for (characters = 'A'; characters <= 'Z'; characters++) {
        printf("%c: %d\n", characters, characters);
    }
}

11. #include <stdio.h>
int main() {
    int number, i, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 2) {
        isPrime = 0;
    }
    else {
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    }
    else {
        printf("%d is not a prime number.\n", number);
    }
}

12. #include <stdio.h>
int main() {
    int number, i;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Factors of %d: ", number);
    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}



