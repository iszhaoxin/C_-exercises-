#include <stdio.h>
#include <string.h>

typedef struct Alpha{
    char alpha;
    int count;
}Alpha;
int main(int argc, char ** argv)
{
    int i;
    char file1[100], file2[100], text[100];
    strcpy(file1,argv[1]);
    strcpy(file2,argv[2]);
    FILE *f1, *f2;
    if((f1 = fopen("1.txt", "r" )) != NULL ){
      fgets(text,100,f1);
      fclose(f1);
    }
    for(int i=0; i<strlen(text); i++)
      if(text[i]>=97)
        text[i] += 'A'-'a';
    if((f2 = fopen("2.txt", "w" )) != NULL ){
      fputs(text,f2);
      fclose(f2);
    }
    Alpha myalpha[5];
    char naist[5] = "NAIST";
    for(int i=0;i<5;i++){
        myalpha[i].alpha = naist[i];
        myalpha[i].count = 0;
    }
    for(int i=0; i<strlen(text);i++)
        for(int j=0; j<5; j++)
            if(myalpha[j].alpha==text[i])
                myalpha[j].count += 1;
    for(int j=0; j<5; j++)
        printf("%c : %d\n", myalpha[j].alpha, myalpha[j].count);
}
