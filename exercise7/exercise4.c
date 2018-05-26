#include <stdio.h>
#include <string.h>

struct GAKUSE{
  float height;
  float weight;
  char name[20];
};
int swap(struct GAKUSE a, struct GAKUSE b);
int main(int argc)
{
    struct GAKUSE students[5];
    char *name[5] = {"あいうえお","さしすせそ","たちつてと","なにぬねの","はひふへほ"};
    float height[5] = {180,170,175,190,188};
    float weight[5] = {89, 78, 70, 100, 95};
    for(int i=0; i<5; i++){
    strcpy(students[i].name,"あいうえお");
      students[i].height = height[i];
      students[i].weight = weight[i];
    }
    for(int i=0; i<5; i++)
        for(int j=i; j<5; j++)
            if(students[i].height<students[j].height)
               swap(students[i],students[j]);
    for(int i=0; i<5; i++){
      printf("name:%s height:%.1f weight:%.1f\n", students[i].name,students[i].height,students[i].weight);
    }
}

int swap(struct GAKUSE a, struct GAKUSE b){
  struct GAKUSE c;
  memcpy(&c,&a, sizeof(struct GAKUSE));
  memcpy(&a,&b, sizeof(struct GAKUSE));
  memcpy(&b,&c, sizeof(struct GAKUSE));
}
