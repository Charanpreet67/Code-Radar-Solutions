#include<stdio.h>
int num(){
    scanf("%d",&num);
    unsigned int msb_mask = 1U << 31;
    if (num & msb_mask){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
       

}