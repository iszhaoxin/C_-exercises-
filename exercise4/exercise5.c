#include <stdio.h>

int common_divisor(int a, int b);
int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    printf("%d\n", common_divisor(a,b));
}

int common_divisor(int a, int b){
    int swap;
    if(b==0)
        return a;
    while(b!=0){
        a = a%b;
        swap = a;
        a = b;
        b = swap;
    }
    return a;
}
