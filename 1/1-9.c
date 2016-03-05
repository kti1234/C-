#include <stdio.h>
#include <string.h>

//#define MAX 1000

void main(){
        //char string[MAX];
        int c;
        int space=0;

        printf("please press the word\n");
        //printf("*****I can support the max number of the word is 1000****\n");

        while ((c = getchar()) != EOF){
                if(c != ' ')
                {
                        putchar(c);
                        space = 0;
                        continue;
                }
                else
                        space++;
                if(space == 1 )
                        putchar(c);
        }
}
