#include<stdio.h>
int main()
{
	int num,remainder,sum=0,i;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		 remainder=num%i;
		if (remainder==0)
		{
			sum=sum+i;
		}
	}
	 if (sum==num)
		printf("%d is a perfect number",num);
	
	  else
	  {
	 printf("\n %d is not a perfect number",num);
	 }
	 }

