#include<stdio.h>

int main(){
union my_union{
int i;
float f;
char ch[40];
}car1,*car2;
printf("Memory size = %zu", sizeof(car1));
return 0;
}
