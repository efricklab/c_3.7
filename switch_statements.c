#include <stdio.h>

int main() {
    int choice, a, b, result;

    // Display the menu
    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%d %d", &a, &b);
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%d %d", &a, &b);
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%d %d", &a, &b);
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                result = a / b;
                printf("Result: %d / %d = %d\n", a, b, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Enter two numbers to find the remainder (modulus): ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                result = a % b;
                printf("Result: %d %% %d = %d\n", a, b, result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 5.\n");
    }

    return 0;
}
