#include <stdio.h>

void main(){
  int a;

  while(a = (getchar() != EOF))
    {
      printf("%d\n",a);
    }
}
