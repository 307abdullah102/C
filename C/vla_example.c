#include<stdio.h>

int main(){
size_t rows = 0;
size_t columns = 0;
printf("Enter the number of rows");
scanf("%d", &rows);
printf("Enter the number of columns");
scanf("%d", &columns);

float beans[rows][columns];
printf("Size of float is %d and %d is the value that how many float value in the beans array ", sizeof(beans), sizeof(beans)/sizeof(float));
return 0;
}
