#include <stdio.h>

void main(void){
    int i,j;
    printf("Input:");
    scanf("%d", &i);
    printf("素因数は:{ ");
    j = 2;
    while(i>1){
        if(i%j==0){
            printf("%d ",j);
            i = i/j;
        }
        j += 1;
    }
    printf("}\n");
}
