#include "stdio.h"

int main(void){
    int a[10];
    int average, i;
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
        if(a[i]<0)
            break;
        average += a[i];
    }
    printf("%d\n", average/i);
}
