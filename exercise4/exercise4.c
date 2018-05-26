#include <stdio.h>
#include <math.h>

#define PI 3.1415926
int main(){
    double a=0;
    while(a<=360){
        printf("%lf %lf\n", sin(a/180*PI),cos(a/180*PI));
        a += 5;
    }
}
