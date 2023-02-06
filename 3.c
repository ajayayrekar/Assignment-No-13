#include <stdio.h>

int sumOfFirstNOddNaturalNumbers(int n) {
  if (n == 0) {
    return 0;
  }
  return (2 * n - 1) + sumOfFirstNOddNaturalNumbers(n - 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  int sum = sumOfFirstNOddNaturalNumbers(n);
  printf("Sum of first %d odd natural numbers is: %d", n, sum);
  return 0;
}
