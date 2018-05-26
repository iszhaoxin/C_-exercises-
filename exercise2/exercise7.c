#include <stdio.h>

int main(){
    double a;
    printf("Input:");
    scanf("%lf",&a);
    printf("If input is C:%d\n",(int)a);
    printf("If input is F:%d\n",(int)(a*1.8+32));
}
