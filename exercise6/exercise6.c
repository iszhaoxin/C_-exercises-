#include <stdio.h>
void swxp(int *x, int *y);
void sort(int *x, int *y);

int main(void){
    int a[10]={34,78,94,35,67,89,54,32,57,47};
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++)
            sort(a+i,a+j);
    }
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
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
