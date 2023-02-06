#include <stdio.h>

int sumOfSquaresOfFirstNNaturalNumbers(int n) {
  if (n == 0) {
    return 0;
  }
  return (n * n) + sumOfSquaresOfFirstNNaturalNumbers(n - 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  int sum = sumOfSquaresOfFirstNNaturalNumbers(n);
  printf("Sum of squares of first %d natural numbers is: %d", n, sum);
  return 0;
}
