#include <stdio.h>

int main(void){
    int a;
    printf("Input:");
    scanf("%d",&a);
    if(a>0){
        printf("positive\n");
    }
    else if(a==0){
        printf("zero\n");
    }
    else if(a<0){
        printf("negative\n");
    }
}
