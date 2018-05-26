#include <stdio.h>

int min(int a, int b);

int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    printf("The minimal value of %d and %d is", a,b);
    a = min(a,b);
    printf(" %d\n", a);
}

int min(int a, int b){
    return a>b?b:a;
}
