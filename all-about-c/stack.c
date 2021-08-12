#include<stdio.h>
double multiplyByTwo(double input){
  double twice = input * 2.0;
  return twice;
  }
  int main(){
  int age = 30;
  double salary = 12312.3;
  double myList[3] = {1.2, 3.4, 5.6};
  printf("double your salary is %.3f", multiplyByTwo(salary));
  return 0;
  }
