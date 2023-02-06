#include <stdio.h>

int hcf(int a, int b) {
  if (b == 0) {
    return a;
  }
  return hcf(b, a % b);
}

int main() {
  int a, b;
  printf("Enter two positive integers: ");
  scanf("%d%d", &a, &b);
  int result = hcf(a, b);
  printf("HCF of %d and %d is: %d", a, b, result);
  return 0;
}
