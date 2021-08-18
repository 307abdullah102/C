#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

jmp_buf buf;

int main(){
int i = setjmp(buf);
printf("i = %d\n", i);
if(i != 0) exit(0);
longjmp(buf,42);
printf("Is printed or not");
return 0;
}
// The last printf is not printed because setjmp and longjmp worked.
