#include <stdio.h>

void main(void){
    int a,b,sum;
    printf("Please input A and B:\n");
    scanf("%d%d",&a,&b);
    if(b-a<=2){
        printf(" B must be 2 larger than A\n");
        return;
    }
    a += 1;
    printf("%d", a);
    while(1)
    {
        sum += a;
        a += 1;
        if(a>=b)
            break;
        printf("+%d", a);
    }
    printf(" (%d)\n",sum);
}
