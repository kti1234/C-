#include <stdio.h>

void main(){
  int C;
  int F;

  /* print the title*/
  printf("the temperature change table\n");
  printf("sheshidu   huashi\n");
  for(F=0;F<=300;F=F+20){
    C=(5*(F-32)/9);
    printf("%-10d  %d\n",F,C);
  }
}
