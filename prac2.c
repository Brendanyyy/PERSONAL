#include <stdio.h>

int main() {
    double num1, num2, result;

    printf("Enter num1: ");
    scanf("%lf", &num1);

    printf("Enter num2: ");
    scanf("%lf", &num2);

    result = num1 * num2;

    printf("%.2lf\n", result);
}