#include<stdio.h>
int main (void) {
  int a = 2;
  int b = 6;
  while (a <= b) {
    if (a % 2 == 1) {
      printf("a is %d\n", a);
    }
    else {
      printf("b is %d\n", b);
      for (int i = 0; i < b - a ; i++) {
        printf("a * i + b = %d\n", a * i + b);
      }
    }
    a++;
    b--;
  }
  return 0;
}