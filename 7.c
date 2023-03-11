#include<stdio.h>
int main(){
	int i;
    for(i=1;i<101;i++){
       { if(i%2==0){
            printf("%d - even number\n",i);
        }
        else
        printf("%d - odd number\n",i);
        }
    }
    printf("\n\n\n");
      int a;
printf("Enter a number\n");
scanf("%d", &a);
if(a%2==0){
printf("%d is even",a);

}
else{
printf("%d is odd",a);
}
return 0;
}
