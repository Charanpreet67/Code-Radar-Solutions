#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num & 1){
        printf("Set %d", num);
    }else{
        printf("Not Set %d",num);
    }
    return 0;
}