#include <stdio.h>

void main(void){
    for(int i=1;i<=100;i+=10){
        for(int j=0;j<10;j++){
            printf("%d ",i+j);
        }
        printf("\n");
    }
}
