#include <stdio.h>
/*
Given a non-negative integer N:  Make a variable called x, and set it to -N*N.  Count from 1 to 3N + 1 (exclusive), and for each number that you count (call it 'i'):    Write down the value of x.    Update x to be (x + 2i).
*/
void q3o1(int n){ //option 1
  int x = - n*n;
  for(int i=1; i<3*n+1; i++){
    //
    printf("i is %i, x is %i \n",i,x);
    x = x + 2*i;
    printf("updated x: %i \n",x);
    //
  }
  //
}
/*
Given a non-negative integer N:  Make a variable called x, and set it to -N*N.  Count from 1 to 3N + 1 (exclusive), and for each number that you count (call it 'i'):    Write down the value of x.    Update x to be (x + 2i - 1).
*/
void q3o2(int n){ //option 2
  int x = - n*n;
  for(int i=1; i<3*n+1; i++){
    //printf("i is %i, x is %i \n",i,x);
    printf("%i ",x);
    x = x + 2*i - 1;
    //printf("updated x: %i \n",x);
  }
  //
  printf("\n");
  //
}
//
/*
Given a non-negative integer N:  Make a variable called x, and set it to -N*N.  Count from 0 to 3N + 1 (exclusive), and for each number that you count (call it 'i'):    Write down the value of x.    Update x to be (x + 2i - 1).
*/
void q3o3(int n){ //option 3
  int x = - n*n;
  for(int i=0; i<3*n+1; i++){
    //
    //printf("i is %i, x is %i \n",i,x);
    printf("%i ",x);
    x = x + 2*i - 1;
    //printf("updated x: %i \n",x);
    //
  }
  printf("\n");
  //
}
//
//
//
int main(){
  //
  //q3o1(5);
  //printf("\n");
  q3o2(5);
  printf("\n");
  q3o2(6);
  //q3o3(5);
  return 1;
  //
}