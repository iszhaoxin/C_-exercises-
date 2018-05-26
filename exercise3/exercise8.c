#include <stdio.h>

void main(void){
    int  a, j=0, i=1;
    printf("Input:");
    scanf("%d", &a);
    while(a/i>0){
        i *= 10;
        j += 1;
    }
    printf("%d桁\n",j);
}
