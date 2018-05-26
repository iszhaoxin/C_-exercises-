#include <stdio.h>

void main(void){
    int i=1,sum=0;
    printf("Input:\n");
    do
    {
        scanf("%d", &i);
        sum += i;
    }while(i>0);
    printf("Sum:%d\n", sum);
}
