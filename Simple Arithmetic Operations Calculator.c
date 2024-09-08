#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Welcome back to the Simple Arithmetic Operations Calculator!\n");
    printf("Press Enter to continue...\n");
    getchar(); // Wait for the user to press Enter

    printf("Simple Arithmetic Operations\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Divide\n");

    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (choice) {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}