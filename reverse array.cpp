#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a[100],temp;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
		printf("reversed array is:");

	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
