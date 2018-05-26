#include <stdio.h>

int main(void){
    int x[10]={0,1,2,3,4,5,6,7,8,9};
    printf("%u ", x); printf("%u ", x+1);
    printf("%d ", *x); printf("%d \n", *(x+1));
}
