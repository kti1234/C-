#include <stdio.h>

#define LOW  300
#define HIGH 0
#define STEP -20

void main(){
  int C;
  int F;

  printf("the temperature from C to F\n");
  printf("C        F\n");

  for(C = LOW; C >= HIGH; C = C + STEP){
    F = C * 9 / 5 + 32;
    printf("%-8d%d\n",C,F);
  }
}
