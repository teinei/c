/*
#Write a C-program that displays the following:

"Programming in C"
#using this printf statement:

printf ("Programming %c%c %c\n", letter1, letter2, letter3);
#Warning: do not use a scanf statement in this exercise!
 */
//1301b.c
//declare a char and print it
#include <stdio.h>
int main(void) {
  char letter1,letter2,letter3;//DECLARE A CHARACTER VARIABLE
  letter1 = 'i';//DEFINE or INITIALIZE or ASSIGN a character value
  letter2 = 'n';
  letter3 = 'C';
  printf ("Programming %c%c %c\n", letter1, letter2, letter3);
  return 0;
}
