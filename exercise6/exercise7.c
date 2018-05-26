#include <stdio.h>

int main(void){
    char name[] = "Taro Yamada";
    char *p;
    p = name;
    while(*p!=' ')
        p+=1;
    *p = '\0';
    printf("First Name = %s,", name);
    printf(" Last Name = %s \n", p+1);
}
