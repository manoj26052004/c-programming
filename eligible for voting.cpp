#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter your age:");
	scanf("%d",&a);
	if (a>=18)
	{
	printf("your are eligible for voting");
}
 else
 {
 
   b=18-a;
   printf("your are allowed to vote after %d years",b);
}
}
