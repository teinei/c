//activity                                                                      
//1206c.c                                                                       
#include<stdio.h>
int main(){
  int i,n;
  scanf("%d%d",&n);
  for(i=0;i<=10;i++){
    int product = i*n;
    printf("%dx%d = %d\n",i,n,product);
  }
  return 0;
}