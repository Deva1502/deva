/*conversion of distance*/
#include<stdio.h>
int main(){
float km, m, cm, feet, inch, dev;
printf("enter the distance in kilometers:\n");
scanf("%f", &km);
m = km*1000;
cm = m*100;
inch = cm/2.54;
feet = inch/12;
dev = feet *15;
printf("distance in m is: %f\n",m);
printf("distance in cm is; %f\n", cm);
printf("\ndistance in feet is : %f",feet);
printf("\ndistance in inch is ; %f", inch);
printf("\ndistance in dev is %f",dev);
return 0;
}