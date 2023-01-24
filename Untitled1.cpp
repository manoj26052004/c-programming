#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,ch,c;
		printf("enter the value of x,n:");
			scanf("%d%d",&x,&n);
				printf("enter the choice:");
					scanf("%d",&ch);
						switch(ch)
						{
						 case 1:
						 	printf("%d+%d=%d",x,n,c=x+n);
						 	 break;
						 	case 2:
						 		printf("%d-%d=%d",x,n,c=x-n);
						 		 break;
						 		case 3:
						 			printf("%d*%d=%d",x,n,c=x*n);
						 			break;
						 			case 4:
						 				printf("%d/%d=%d",x,n,c=x/n);
						 				 break;
						 				 case 5:
						 				 	printf("%d^%d=%d",x,n,c=pow(x,n));
						 				 	 break;
						 	
						}
						
			
}
