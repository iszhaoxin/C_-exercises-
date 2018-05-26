#include <stdio.h>
#include <string.h>

int swap(char *a, char *b);
int main(int argc)
{
    // char **w;
    char w[5][20];
    scanf("%s%s%s%s%s", w[0],w[1],w[2],w[3],w[4]);

    for(int i=0; i<5; i++)
        for(int j=i; j<5; j++)
            if(strcmp(w[i],w[j])>0)
               swap(w[i],w[j]);
    for(int i=0; i<5; i++){
      printf("%s len:%d\n", w[i],strlen(w[i]));
    }
}

int swap(char *a, char *b){
  char c[10];
  strcpy(c,a);
  strcpy(a,b);
  strcpy(b,c);
}
