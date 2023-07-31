1. #include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}

2. #include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num % 2) {
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
            printf("%d is an odd number.\n", num);
            break;
    }
}

3. #include <stdio.h>
int main() {
    int operator;
    float no1, no2, result;
    printf("Menu-Driven Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose an operator (1-4): ");
    scanf("%d", &operator);
    printf("Enter the first number: ");
    scanf("%f", &no1);
    printf("Enter the second number: ");
    scanf("%f", &no2);
    switch (operator) {
        case 1:
            result = no1 + no2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = no1 - no2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = no1 * no2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (no2 != 0) {
                result = no1 / no2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Cant divide by zero.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
            break;
    }
}

4. #include <stdio.h>
int main() {
    int choice;
    float radius;
    const float PI = 3.14159;
    printf("Menu\n");
    printf("1 - Calculate the circumference of a circle\n");
    printf("2 - Calculate the area of a circle\n");
    printf("3 - Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("Enter the radius: ");
    scanf("%f", &radius);
    switch (choice) {
        case 1:
            printf("Circumference: %.2f\n", 2 * PI * radius);
            break;
        case 2:
            printf("Area: %.2f\n", PI * (radius * radius));
            break;
        case 3:
            printf("Volume: %.2f\n", (4.0 / 3.0) * PI * (radius * radius * radius));
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
    }
}

5.  #include <stdio.h>
int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    switch (character) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", character);
            break;
        default:
            printf("%c is not a vowel.\n", character);
            break;
    }
}

6. #include <stdio.h>
int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1:
            printf("31 days.\n");
            break;
        case 2:
            printf("28 days.\n");
            break;
        case 3:
            printf("31 days.\n");
            break;
        case 4:
            printf("30 days.\n");
            break;
        case 5:
            printf("31 days.\n");
            break;
        case 6:
            printf("30 days.\n");
            break;
        case 7:
            printf("31 days.\n");
            break;
        case 8:
            printf("31 days.\n");
            break;
        case 9:
            printf("30 days.\n");
            break;
        case 10:
            printf("31 days.\n");
            break;
        case 11:
            printf("30 days.\n");
            break;
        case 12:
            printf("31 days.\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }
}

7.

