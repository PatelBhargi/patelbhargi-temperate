#include<stdio.h>

main()
{
	int n,a=0,b=1,c,i;
	
	printf("enter number of term...");
	scanf("%d",a);
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}
