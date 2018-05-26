#include <stdio.h>
#include <string.h>

int main(int argc)
{
    char a[20], b[20];
    gets(a);
    strcpy(b,a);
    for(int i=0; i<strlen(a); i++)
      b[i] = a[strlen(a)-1-i];
    if(strcmp(a,b)==0)
      printf("回文である\n");
    else
      printf("回文ではない\n");

}
