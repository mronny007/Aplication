#include<stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    // scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(choice) {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;
        case 4: 
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default: 
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Result = %.2lf\n", result);
    

    return 0;
}