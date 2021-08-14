#include<stdio.h>
#include<stdarg.h>

double average(double v1, double v2, ...);
int main(){
double v1 = 10.5, v2 = 2.5;
int v3 = 4, v4 = 2;
long v5 = 12L, v6 = 20L;
printf("Average = %.2lf\n", average(1.0,2.0,4.0));
printf("Average = %.2lf\n", average(v1,v2,4.0));
printf("Average = %.2lf\n", average((double)v5,(double)v6,4.0));
return 0;
}

double average(double v1, double v2, ...){

va_list parg;
double sum = v1 + v2;
double value = 0.0;
int count = 2;
va_start(parg,v2);
while((value = va_arg(parg, double)) != 0.0){
    sum += value;
    ++count;
}
va_end(parg);
printf("%lf\n", sum);
printf("%d\n", count);

return sum/count;
}
