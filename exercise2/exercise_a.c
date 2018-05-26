#include <stdio.h>

int main(){
    int a,b;
    printf("Price:");
    scanf("%d",&a);
    printf("Your payment:");
    scanf("%d",&b);
    printf("Return:%d/%d/%d/%d/%d/%d\n",(b-a)/1000,(b-a)%1000/500,(b-a)%500/100,(b-a)%100/10,(b-a)%10/5,(b-a)%5);
    // printf("%.0fC = %.0fF\n",a, a*1.8+32);
}
