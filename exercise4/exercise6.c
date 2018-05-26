#include "stdio.h"

int main(void){
    char name[] = "Taro Yamada";
    printf("%c\n", name[0]);
    for(int i=1;i<sizeof(name)/sizeof(name)[0];i++){
        if(name[i-1]==' ')
            printf(".%c\n", name[i]);
    }
}
