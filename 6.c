#include<stdio.h>
int main(){
 for(int i=1;i<=100;i++){
       { if(i%2==0){
            printf("%d - even number\n",i);
        }
        else
        printf("%d - odd number\n",i);
        }
    }
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

