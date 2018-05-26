#include <stdio.h>

void main(void){
    int i;
    printf("Input:");
    scanf("%d", &i);
    if(i%2==0){
        printf("素数ではありません\n");
        return;
    }
    for(int j=i/2;j>2;j--){
        if(i%j==0){
            printf("素数ではありません\n");
            return;
        }
    }
    printf("素数です\n");
}
