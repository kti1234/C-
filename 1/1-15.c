#include <stdio.h>

#define MAX 300
#define MIN 0
#define STEP 20

/* flag is  0 , C -> F ; flag isn't 0 ,  F -> C*/
int changetmperature(int i, int flag)
{
        int temperature = 0;
        if(flag == 0)
                temperature = (i * 9) / 5 + 32;
        else
                temperature = 5 * (i - 32) / 9;

        return temperature;

}

void main(){

        int i;
        int end;

        for(i = MIN; i<= MAX; i = i + STEP){
                end = changetmperature(i, 1);
                printf("%-8d%d\n",i,end);

        }

}
