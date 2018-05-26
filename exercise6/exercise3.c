#include <stdio.h>
void swap(int *a, int *b);
int main(void){
    int a,b;
    scanf("%d%d", &a,&b);
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    swap(&a,&b);
    printf("a:%d\n", a);
    printf("b:%d\n", b);
}

void swap(int *a, int *b){
    int s;
    s = *a;
    *a = *b;
    *b = s;
}
