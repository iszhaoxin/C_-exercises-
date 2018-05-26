#include <stdio.h>

void main(void){
    int sum=0;
    for(int i=1;i<=100;i+=10){
        for(int j=0;j<10;j++){
            for(int k=0;k<=i+j;k++)
                sum += k;
            printf("%d ",sum);
            sum = 0;
        }
        printf("\n");
    }
}
