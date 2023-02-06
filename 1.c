#include <stdio.h>

int sumOfFirstNNaturalNumbers(int n) {
  if (n == 0) {
    return 0;
  }
  return n + sumOfFirstNNaturalNumbers(n - 1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  int sum = sumOfFirstNNaturalNumbers(n);
  printf("Sum of first %d natural numbers is: %d", n, sum);
  return 0;
}
