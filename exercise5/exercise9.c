#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int add_and_prod(int* a, int* b,int row_cnt, int col_cnt);

int main(void){
    int size = 3;
    int a[3][3];
    int b[3][3];
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            scanf("%d", &a[i][j]);
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            scanf("%d", &b[i][j]);
    int row_cnt = sizeof(a)/sizeof(*a);
    int col_cnt = sizeof(*a)/sizeof(int);
    add_and_prod((int*)a,(int*)b, row_cnt, col_cnt);
}

int add_and_prod(int* a, int* b,int row_cnt, int col_cnt){
    int *sum,*product;
    sum = (int *)malloc(row_cnt*col_cnt*sizeof(int));
    product = (int *)malloc(row_cnt*col_cnt*sizeof(int));
    printf("%d\n", sizeof(a));
    for(int i=0; i<row_cnt; i++){
        for(int j=0; j<col_cnt; j++){
            sum[i*col_cnt+j] = a[i*col_cnt+j]+b[i*col_cnt+j];
            for(int k=0;k<col_cnt;k++)
                product[i*col_cnt+j] += a[i*col_cnt+k]*b[k*col_cnt+j];
        }
    }
    printf("the sum of a and b is : \n[");
    for(int i=0;i<row_cnt;i++){
        for(int j=0;j<col_cnt;j++)
            printf("\t%d ", sum[i*col_cnt+j]);
        printf("\n");
    }
    printf("]\n");
    printf("the product of a and b is : \n[");
    for(int i=0;i<row_cnt;i++){
        for(int j=0;j<col_cnt;j++)
            printf("\t%d ", product[i*col_cnt+j]);
        printf("\n");
    }
    printf("]\n");
}
