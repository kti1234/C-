#include <stdio.h>
#include <string.h>

int main(){
        int c;
        int MAX;
        int cnt = 0;
        int i,iRC;

        iRC = 0;

        printf("This program is show the word's long of the input\n");
        printf("It support the longest word's is:");
        iRC = scanf("%d", &MAX);
        if(iRC != 1){
                printf("Input err, I will used the defult number(20)\n");
                MAX = 20;
        }else if(MAX <= 0){
                printf("Input err, please input a positive number\n");
                return 0;
        }
        else{
                printf("you set the longest word's is %d\n",MAX);
        }

        int a[MAX];

        for(i = 0; i < MAX; i++)
                a[i] = 0;

        while((c = getchar()) != EOF ){
                if(c != ' ' && c != '\t' && c != '\n'){
                        cnt++;

                }else{
                        /* because the array is from the 0, cnt-1 */
                        a[cnt-1]++;
                        cnt = 0;
                }
        }


        printf("the result is:\n");
        printf("long        word\n");
        for(i = 0; i < MAX; i++){
                /* because the array is from the 0, the real word's long is (i+1)*/
                printf("%-12d%d\n",(i+1),a[i]);
        }
        return 0;
}
