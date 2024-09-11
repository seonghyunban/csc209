#include <stdio.h>

int main() {
  double cm, inches;

  printf("Type the number of centimeters: ");
  scanf("%lf", &cm);

  inches = cm * 0.393701;
  printf("%lf centimeters is %lf inches.\n", cm, inches);

  int num1, num2;
  printf("Type two integers: ");
  scanf("%d %d", &num1, &num2);
  printf("You typed %d and %d", num1, num2);
}