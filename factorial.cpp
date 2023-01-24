#include<stdio.h>
int main()
{
	int i,fact=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>0)
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
}
    	printf("the factorial of %d is %d",n,fact);
}
