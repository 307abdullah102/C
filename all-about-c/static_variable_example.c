#include<stdio.h>
int fun(){
    static int count = 0;
    count++;
    return count;
}
int main(){
printf("%d\n", fun());
printf("%d", fun());
return 1;
}
// this output would not have been achieved if the variable were not static.
