 #include<stdio.h>
              int main()
              {
	            int i,j;
	            for(i=1;i<101;i++)
	            {
		            if(i%2==0)
		            {
		                       printf("%d is Even number\n",i );
		            }
		            else
		           {
			          printf("%d is Odd number\n",i);
		           }
		
	             }
   printf("Enter a number to know it is                      
                         an even or odd\n");
	             scanf("%d",&j);
	             if(j%2==0)
	            {
		             printf("%d is an Even number",j);
	            }
	            else;
	           {
		            printf("%d is an Odd number",j);
	           }
	           return 0;
              }

