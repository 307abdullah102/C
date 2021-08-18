#include<stdio.h>
struct Point{
int x,y,z;
};
int main(){
struct Point p1 = {.y = 2, .z = 3, .x = 5};
struct Point p2 = {.x = 27};
printf("x = %d", p2.x);
return 0;
}
