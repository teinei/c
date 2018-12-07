/*
Dear Procrastinator,
You still have to wait for X days (Y minutes or Z seconds) before you can procrastinate!
 */
#include<stdio.h>

int main(){
  int x,y,z;
  //day of procrastinator on march 25
  //been asked on march 23
  x = 25-23;//days left
  y = x*24*60;//minutes, a day has 24 hr, each hr has 60 mins
  z = y*60;//seconds
  //
  printf("Dear Procrastinator,\nYou still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!",x,y,z);
  return 1;
}
