#include <stdio.h>
int main()
{
	int z,x,y,w,i=5;
	z=i++ + ++i;//first i=5 then post increment so value of i=6 and then pre increment for i so i becomes i=7 so 5+7=12
	printf("%d\n",i);
	x=i+++i++;//first i=7 then post increment so value of i=8 and hence 7+8=15 and then post increment for i so i=9
		printf("%d\n",i);
	y=i--+i--;//initially i=9 and then post decrement so i=8 hence sun is 9+8=17 then again after post ecrement i=7
		printf("%d\n",i);
	w=--i+--i;//initially i=7 then pre decrement so i=6 then adding with after pre decrementing i so now i=5 so 6+5=11
		printf("%d\n",i);
	printf("%d\n%d\n%d\n%d\n", z , x , y,w);
	return 0;
}
