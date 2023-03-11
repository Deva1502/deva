#include<stdio.h>
	int factorial(int n){if (n==0)
	return 1;
	return n*factorial(n-1);
}
int main(){
	int n,result;
	printf("enter the positive integer: ");
	scanf("%d",&n);
	result=factorial(n);
	printf("factorial of %d = %d\n",n,result);
	return 0;
	}
