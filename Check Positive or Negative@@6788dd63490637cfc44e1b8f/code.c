#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1)
    if(num1>0){
        printf("%dPostive");
    }
    else if(num1<0){
        printf("%dNegative");
    }
    else {
        printf("%dZero");
    }
    return 0;

}