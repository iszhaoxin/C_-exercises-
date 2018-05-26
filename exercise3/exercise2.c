#include <stdio.h>
int main(void){
    int ymd;
    scanf("%d", &ymd);

    int y = ymd / 10000;
    int m = (ymd / 100) % 100;
    int d = ymd % 100;

    int dmax;
    switch (m) {
        case 1:
            dmax = 31;
            break;
        case 2:
            if(y%4==0){
                dmax = 29;
            }
            else{
                dmax = 30;
            }
            break;
        case 3:
            dmax = 31;
            break;
        case 4:
            dmax = 30;
            break;
        case 5:
            dmax = 31;
            break;
        case 6:
            dmax = 30;
            break;
        case 7:
            dmax = 31;
            break;
        case 8:
            dmax = 31;
            break;
        case 9:
            dmax = 30;
            break;
        case 10:
            dmax = 31;
            break;
        case 11:
            dmax = 30;
            break;
        case 12:
            dmax = 31;
            break;
    }

    if (1 <= d && d <= dmax) {
        printf("%d/%d/%d\n", y, m, d);
    } else {
        printf("Invalid day: %d\n", d);
    }
}
