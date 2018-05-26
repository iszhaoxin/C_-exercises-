#include "stdio.h"

int main(void){
    int a[10] = {34,78,94,35,67,89,54,32,57,47};
    float sum;
    for(int i=0; i<10; i++){
        sum += a[i];
    }
    printf("%.2f\n", sum/10);
}
