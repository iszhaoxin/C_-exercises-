#include <stdio.h>

int main(){
    double a;
    scanf("%lf",&a);
    printf("%lf in = %lf cm\n",a, a*2.54);
    printf("%lf cm = %lf in\n",a, a/2.54);
}
