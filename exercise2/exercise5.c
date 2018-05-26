#include <stdio.h>

int main(){
    long int a;
    scanf("%ld",&a);
    printf("%d/%d/%d\n",a/10000,a%10000/100,a%10000%100);
}
