#define MAX 256

void main(){
        int c;
        int a[MAX];
        int i;

        for(i = 0; i < 256 ;i++)
                a[i] = 0;

        while((c = getchar()) != EOF){
                a[c]++;
        }

        printf("the result of the input\n");
        printf("char     number\n");
        for(i = 0; i < MAX; i++){
                printf("%-9c%d\n", i, a[i]);

        }


}
