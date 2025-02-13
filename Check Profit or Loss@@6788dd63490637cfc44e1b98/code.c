#include<stdio.h>
int main(){
    float cost_price, selling_price;
    scanf("%f %f", &cost_price, &selling_price);
    if(cost_price < selling_price ){
        printf("Profit %.2f\n");
    }else if (cost_price > selling_price ){
        printf("Loss%.2f\n");
    }
    else{
        printf("No Profit No Loss\n");
    }
    return 0;
}