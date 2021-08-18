#include<stdio.h>
#include<math.h>
int convertBinaryToDecimal(long long n){
 int decimal = 0, i = 0, reminder = 0;
 while(n != 0){
    reminder = n%10;
    n /= 10;
    decimal += reminder * pow(2,i);
    ++i;
 }
 return decimal;
}

long long convertDecimalToBinary(int n){
long long binary = 0;
int reminder, i = 1;
while(n != 0){
    reminder = n % 2;
    n /= 2;
    binary += reminder * i;
    i *= 10;
}
return binary;
}

int main(){
    int dec = convertBinaryToDecimal(1111);
    long long bin = convertDecimalToBinary(18);
    printf("Binary equivalent of 18 => %d \n", bin);
    printf("Decimal equivalent of 1111 => %d \n", dec);
return 0;
}
