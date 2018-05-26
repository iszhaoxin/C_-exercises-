#include <stdio.h>

int main(){
    double a;
    printf("Input:");
    scanf("%lf",&a);
    printf("If input is C:%d\n",a>0?(int)(a+0.5):(int)(a-0.5));
    printf("If input is F:%d\n",a>0?(int)(a*1.8+32+0.5):(int)(a*1.8+32-0.5));
}
