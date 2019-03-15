#include <stdio.h>

int main(void) {
  int count, counter;
  printf("Enter the number upto which the natural numbers should be printed:");
  scanf("%d", &count);
  counter = 1;
  printf("The first %d natural numbers are", count);
  for(counter = 1; counter <= count; counter++) {
    printf(" %d", counter);
  }
  printf(".");
}