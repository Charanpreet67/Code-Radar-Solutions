#include<stdio.h>
int num(){
    scanf("%d",&num);
    int msb_mask = 1 << 32;
    if (num & msb_mask){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
       

}