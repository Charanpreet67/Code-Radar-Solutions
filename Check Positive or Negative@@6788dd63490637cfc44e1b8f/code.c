#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    if(num1>0){
        printf("%d Postive \n");
    }
    else if(num1<0){
        printf("%d Negative \n");
    }
    else {
        printf("%d Zero \n");
    }
    return 0;

}