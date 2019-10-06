#include <stdio.h>

int main(void) {
  
  int price = 20;
  int number = 20000000;
  int total = price * number;
  printf("%d", total);	// result: -2147483620
  return 0;
}