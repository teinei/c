//1302b3.c
#include <stdio.h>
int main()
{
  int i, space, rows=5, k=0;
  //int col=9;
  char inchar;
  //printf("Enter number of rows: ");
  //that reads an input character (using scanf)
  scanf("%c", &inchar);
  //scanf("%d",&rows);
  for(i=1; i<=rows; ++i, k=0){
      for(space=1; space<=rows-i; ++space){
        printf("+");
	      //printf("  ");
      }
      while(k != 2*i-1){
        printf("%c",inchar);
	      //printf("* ");
	      ++k;
      }
      for(space=rows-i; space>0; --space){
        printf("+");
	      //printf("  ");
      }
      printf("\n");
  }
  return 0;
}
