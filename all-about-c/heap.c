#include<stdio.h>
#include<stdlib.h>
double *multiplyByTwo(double *input){
  double *twice = malloc(sizeof(double));
  *twice = *input * 2.0;
  return twice;
  }
  int main(){
  int *age = malloc(sizeof(int));
  *age = 30;
  double *salary = malloc(sizeof(double));
  *salary = 12312.3;
  double *myList = malloc(3*sizeof(double));
  myList[0] = 1.2;
  myList[1] = 3.4;
  myList[2] = 5.6;
  printf("double your salary is %.3f", *multiplyByTwo(salary));
  return 0;
  }
