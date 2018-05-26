#include <stdio.h>

int main(){
    double a;
    printf("Input:");
    scanf("%lf",&a);
    printf("If input is C:%lf\n",a);
    printf("If input is F:%lf\n",a*1.8+32);
}
