#include<stdio.h>

int main(){
const int maxInp = 6;
int i = 0;
int number;
double average,sum = 0.0;
for(i = 1; i < maxInp; i++){
    printf("Enter a number");
    scanf("%d", &number);
    if(number < 0){
        goto jump;
    }
    sum += number;

}
jump:
    average = sum / (i - 1);
    printf("Sum = %.2f", sum);
    printf("Average = %.2f", average);
}

// You have max 5 enter. If you enter a negative number in the 5 attempt, the code gives you sum and average.

