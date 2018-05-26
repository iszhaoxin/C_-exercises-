#include <stdio.h>

void main(void){
    int i;
    printf("Input:");
    scanf("%d", &i);
    printf("約数は:");
    for(int j=1;j<=i;j++){
        if(i%j==0){
            printf("%d ",j);
        }
    }
    printf("\n");
}
