#include <stdio.h>

int absolute(int a);

int main(){
    int a;
    scanf("%d", &a);
    printf("The absolute value of %d", a);
    a = absolute(a);
    printf(" is %d\n", a);
}

int absolute(int a){
    return a>=0?a:-a;
}
