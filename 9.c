#include <stdio.h>

int count_digits(int n) {
  if (n == 0) {
    return 0;
  }
  return 1 + count_digits(n / 10);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  int result = count_digits(n);
  printf("The number of digits in %d is: %d", n, result);
  return 0;
}
