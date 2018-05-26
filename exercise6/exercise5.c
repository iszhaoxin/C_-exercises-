#include <stdio.h>
void swxp(int *x, int *y);
void sort(int *x, int *y);

int main(void){
    int a[10]={34,78,94,35,67,89,54,32,57,47};
    printf("a[0]:%d\n",*a);
    for(int i=1;i<10;i++)
        sort(a,a+i);
    printf("a[0]:%d\n",*a);
}

void swxp(int *x, int *y){
    int s;
    s = *x;
    *x = *y;
    *y = s;
}

void sort(int *x, int *y){
    if(*x < *y)
        swxp(x,y);
}
