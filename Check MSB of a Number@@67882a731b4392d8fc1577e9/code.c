#include<stdio.h>
int num(){
    int msb_mask = 1 << 31;
    scanf("%d",&num);
    
    if (num & msb_mask){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
       

}