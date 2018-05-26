#include <stdio.h>

int main(void){
    int height = 30;
    int width = 40;
    int depth = 20;
    int surface_area = 2* (height*width+height*depth+depth*width);
    printf("surface=%d\n",surface_area);
}
