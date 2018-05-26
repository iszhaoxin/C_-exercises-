#include "stdio.h"

int main(void){
    int a[3][10] = {0};
    int i;
    for(i=0; i<10; i++){
        scanf("%d%d%d", &a[0][i],&a[1][i],&a[2][i]);
        if(a[0][i]<0)
            break;
    }
    int a_1=0, a_2=0, a_3=0;
    for(int j=0; j<i; j++){
        a_1 +=  a[0][j];
        a_2 +=  a[1][j];
        a_3 +=  a[2][j];
    }
    printf("%d %d %d\n", a_1/i,a_2/i,a_3/i);
}
