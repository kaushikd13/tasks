#include <stdio.h>

int main(void) {
  int number_one, number_two, number_three, product;
  printf("To multiply three numbers, enter the first number:");
  scanf("%d", &number_one);
  printf("Enter the second number:");
  scanf("%d", &number_two);
  printf("Enter the third number:");
  scanf("%d", &number_three);
  product = number_one*number_two*number_three;
  printf("The product of %d, %d and %d is %d.", number_one, number_two, number_three, product);
  return 0;
}