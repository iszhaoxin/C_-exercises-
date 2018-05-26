#include <stdio.h>

int main(){
    int a,b=0,j=1;
    printf("Input:");
    scanf("%d",&a);
    while(a/j>1000||a/j<-1000){
        j *= 10;
    }
    b = a%j/(j/10);
    printf("Rounding: %d\n",b>0?(b>4)?a/j*j+j:a/j*j:(b<-4)?a/j*j-j:a/j*j);
}
