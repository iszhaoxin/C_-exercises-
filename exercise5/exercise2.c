#include <stdio.h>

int min(int a, int b);
int max(int a, int b);
int main(void){
    int a[10] = {34,78,94,35,67,89,54,32,57,47};
    int max_n = a[0],min_n=a[0];
    for(int i=1; i<10; i++){
        max_n = max(max_n,a[i]);
        min_n = min(min_n,a[i]);
    }
    printf("max:%d min:%d \n", max_n, min_n);
}

int min(int a, int b){
    return a>b?b:a;
}

int max(int a, int b){
    return a<b?b:a;
}
