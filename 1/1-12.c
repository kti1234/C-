#include <stdio.h>
#include <string.h>

void main(){
        int c;
        int space=0;

        printf("please press the word\n");

        while ((c = getchar()) != EOF){
                if(c != ' ' && c != '\n' && c != '\t')
                {
                        putchar(c);
                        space = 0;
                        continue;
                }
                else
                        space++;
                if(space == 1 )
                        printf("1\n");
        }
}
