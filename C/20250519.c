#include <stdio.h>
#include <string.h>
#define MAX 100

struct point
{
    char a;
    char b;
    float c;
    char d;
    double x;
    double y;
    char a1;

}typedef point;


int main(void){
    point one;
    // printf("%f, %f\n",one.x, one.y);
    printf("%lu\n",sizeof(one));


}
