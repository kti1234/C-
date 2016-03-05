#include <stdio.h>

#define MAX 1000

int getlines(char line[], int maxline);
void copy(char to[], char frome[]);

main()
{
        int len;
        int max;
        char line[MAX];
        char longest[MAX];

        max = 0;
        while((len = getlines(line, MAX)) > 0)
        {
                printf("the line's long is %d\n",len);
                if (len > max){
                        max = len;
                        copy(longest, line);
                }
        }
        if (max > 0)
                printf("%s", longest);

        return 0;
}


int getlines(char s[], int lim)
{
        int c,i;

        for( i = 0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
                s[i]=c;

        if(c == '\n'){
                s[i]=c;
                ++i;
        }
        s[i] = '\0';
        return i;
}


void copy(char to[], char from[]){
        int i;

        i=0;
        while((to[i] = from[i]) != '\0')
                i++;

}
