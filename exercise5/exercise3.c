#include "stdio.h"

int main(void){
    int a[21];
    a[0] = 0;
    a[1] = 1;
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    for(int i=2; i<21; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d\n", a[i]);
    }
}
