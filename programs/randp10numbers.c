#include <stdio.h>

int main(void) {
  int counter, numbers[10];
  printf("To read and print 10 numbers, enter the first number:");
  scanf("%d", &numbers[counter]);
  for(counter = 1; counter < 10; counter++) {
    printf("Enter the next number:");
    scanf("%d", &numbers[counter]);
  }
  printf("Entered 10 numbers are:");
  for(counter = 0; counter <10; counter++) {
    printf(" %d", numbers[counter]);
  }
  printf(".");
}