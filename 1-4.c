#include <stdio.h>

void main(){
  int C;
  int F;

  printf("the temperature from C to F\n");
  printf("C        F\n");

  for(C = 0;C <= 300; C = C+20){
    F = C * 9 / 5 + 32;
    printf("%-8d%d\n",C,F);
  }
}
