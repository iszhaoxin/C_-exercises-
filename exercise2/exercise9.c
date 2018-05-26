#include <stdio.h>

int main(){
    int a;
    char b;
    printf("Room Number:");
    scanf("%c%d",&b,&a);
    printf("Building %c, Floor %d, Room No.%d\n",b,a/100,a%100);
    // printf("%.0fC = %.0fF\n",a, a*1.8+32);
}
