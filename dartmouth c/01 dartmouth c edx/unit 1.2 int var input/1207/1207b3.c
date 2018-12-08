/*(enginePower + resistance) * (weight - height)
2
50 60 2 1
43 62 5 2
//
Output:
163
//(2 + 1) * (60-50) + (5 + 2) * (62-43) */
#include <stdio.h>
int main() {
    int numberRead = 0; //number of robots deployed
    //
    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    //
    int power = 0;//the result calculate out
    //The first line of the input indicates the number of robots to be deployed. 
    //printf("Please type in the number of robots to be deployed:\n");
    scanf("%d", &numberRead);
    //height, the weight, the power of the engines and a resistance rating (1,2, or 3)
    // of each of of these robots
    //printf("Please type in height, weight, enginPoser, resistance:\n");
    int i;
    for(i = 0; i < numberRead; i++){
        //scanf("%d",&numberRead);
        scanf("%d%d%d%d",&height,&weight,&enginePower,&resistance);
        //printf("I have read %d from the input terminal\n",numberRead);
        power += (enginePower + resistance) * (weight - height);
        //sum = sum + numberRead;  
    }
    //
    printf("%d",power);
    //
  return 0;
}