#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num & 1){
        printf("Set %d");
    }else{
        printf("Not Set %d");
    }
    return 0;
}