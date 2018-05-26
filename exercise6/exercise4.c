#include <stdio.h>
void swxp(int *x, int *y);
void sort(int *x, int *y);

int main(void){
    int x,y;
    scanf("%d%d", &x,&y);
    printf("x:%d\n", x);
    printf("y:%d\n", y);
    sort(&x,&y);
    printf("x:%d\n", x);
    printf("y:%d\n", y);
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
