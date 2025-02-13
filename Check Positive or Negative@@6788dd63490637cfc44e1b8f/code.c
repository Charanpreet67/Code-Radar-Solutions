#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    if(num1>0){
        printf("%d Postive");
    }
    else if(num1<0){
        printf("%d Negative");
    }
    else (num1==0){
        printf("%d Zero");
    }
    return 0;

}