#include <stdio.h>

int binaryToDecimal(int binary) {
  int decimal = 0;
  int base = 1;

  while (binary > 0) {
    int remainder = binary % 10;
    decimal += remainder * base;
    binary /= 10;
    base *= 2;
  }

  return decimal;
}

int main() {
  int binary;

  printf("Enter a binary number: ");
  scanf("%d", &binary);

  int decimal = binaryToDecimal(binary);

  printf("The decimal equivalent of %d is %d\n", binary, decimal);

  return 0;
}
