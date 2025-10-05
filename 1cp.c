#include <stdio.h>
int main() {
    int num1, num2;
    int sum, mul, div;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    mul = num1 * num2;
    div = num1 / num2; 
    printf("\nResults:\n");
    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n", mul);
    printf("Division = %d\n", div);
  return 0;
}
