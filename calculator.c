#include <stdio.h>
int main(){
    int num1, num2;
    char choice ='y',operator;
    while (choice == 'y'){
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        printf("Enter '+' for addition, '-' for subtraction, '*' for multiplication and '/' for division: ");
        scanf(" %c", &operator);
        switch(operator){
            case '+':
                printf("Result: %d", num1 + num2);
                break;
            case '-':
                printf("Result: %d", num1 - num2);
                break;
            case '*':
                printf("Result: %d", num1 * num2);
                break;
            case '/':
                printf("Result: %d", num1 / num2);
                break;
            default:
                printf("Invalid operator");
        }
        printf("\nFor another calculation press 'y': ");
        scanf(" %c", &choice);
    }
    return 0;
}