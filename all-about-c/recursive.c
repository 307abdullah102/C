#include<stdio.h>

int factorial(int n){
if (n == 0) return (1);

return (n * factorial(n - 1));
}

int main(){

int j = 0;

for (j = 0; j < 8; j++){
    printf("%d! = %d\n", j, factorial(j));
}
return 0;
}
