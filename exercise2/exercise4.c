#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%dh %dmin %dsec\n",a/3600,a%3600/60,a%3600%60);
}
