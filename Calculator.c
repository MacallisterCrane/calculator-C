#include <stdio.h>

int main(void) {
    char operator;
    double first, second;
    printf("Please enter an operator (+, -, *, /) : ");
    scanf("%c", &operator);

    printf("Please enter two numbers: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%lf + %lf = %lf\n", first, second, first + second);
        break;
        case '-':
            printf("%lf - %lf = %lf\n", first, second, first - second);
        break;
        case '*':
            printf("%lf * %lf = %lf\n", first, second, first * second);
        break;
        case '/':
            printf("%lf / %lf = %lf\n", first, second, first / second);
        break;
        default:
            printf("Invalid operator\n");
        break;
    }
}
