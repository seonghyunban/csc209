#include <stdio.h>

int main() {
  printf("Hello, world!\n");

  int age = 50;
  printf("Here is an integer %d\n", age);

  double temperature = 98.5;
  printf("This number %.2f is a floating-point number", temperature);

  double one_third = 1.0 / 3.0;
  printf("Here is a double for one-third %.2f\n", one_third);

  printf("Hello %d, hello %f.\n", age, temperature);
  return 0;
}