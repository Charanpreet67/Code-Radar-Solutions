#include<stdio.h>
int main(){
    int num1, num2, num3;
    float avg;
    scanf(%f %f %f, &num1, &num2, &num3);
    avg=(num1 + num2 + num3)/3.0;
    printf("Average: %.2f\n", avg);
    return 0;
}