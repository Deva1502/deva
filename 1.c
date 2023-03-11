// Calculate Ramesh gross salery
#include<stdio.h>

int main(){
    float bp, da, hra, grpay;
    printf("\nEnter Basic Salery of Ramesh: ");
    scanf("%f", &bp);
    da=0.4*bp;
    hra=0.2;
    grpay=bp+da+hra;
    printf("basic salery of ramesh is =%f\n",bp);
    printf("dearness allowance=%f\n",da);
    printf("house rent allowance=%f\n",hra);
    printf("gross pay of ramesh is %f\n",grpay);
return 0;
}
