#include<stdio.h>
#include<stdlib.h>
#include<stdnoreturn.h>

noreturn void my_exit();

void my_exit(){
printf("Exiting");
exit(0);
}
int main(){
my_exit();
return 0;
}
