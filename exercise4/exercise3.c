#include <stdio.h>

int min(int a, int b);

int main(){
    int a,b,c;
    int min_value;
    scanf("%d%d%d", &a,&b,&c);
    printf("The minimal value of %d, %d and %d is", a,b,c);
    min_value = min(a,b);
    min_value = min(min_value,c);
    printf(" %d\n", min_value);
}

int min(int a, int b){
    return a>b?b:a;
}
