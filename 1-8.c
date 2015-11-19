#include <stdio.h>

void main()
{
        int space = 0;
        int table = 0;
        int enter = 0;
        int end;

        while((end = getchar()) != EOF)
        {
                if(end == ' ')
                        ++space;
                if(end == '\t')
                        ++table;
                if(end == '\n')
                        ++enter;
        }

        printf("the number of space is %d\n",space);
        printf("the number of table is %d\n",table);
        printf("the number of enter is %d\n",enter);
}
