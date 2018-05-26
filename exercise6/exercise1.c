#include <stdio.h>

int main(void){
    int a=20,b=10;
    int *pa,*pb;
    pa = &a;
    pb = &b;
    printf("add : %d \n", *pa+*pb);
    printf("sub : %d \n", *pa-*pb);
    printf("product : %d\n", *pa * (*pb));
    printf("divide  : %d\n", *pa/(*pb));
}
