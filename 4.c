#include<stdio.h>

int main(){
int m1, m2, m3, m4, m5, aggr;
float per;
printf("\nEnter the marks in 5 subject:");
scanf("%d %d %d %d %d ,&m1, &m2, &m3, &m4, &m5");
aggr = m1+m2+m3+m4+m5;
per= aggr/5;
printf("aggrigate marks = %d\n",aggr);
printf("percentage marks = %f\n",per);
return 0;
}