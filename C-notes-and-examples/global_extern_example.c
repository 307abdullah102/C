#include <stdio.h>
int i = 5;
void foo (void);
int main(){
printf("%i\n",i);
foo();
printf("%i", i);
return 0;
}
extern int i ;
void foo(void){
    i = 100;
}
