#include<stdio.h>

main()
{
	int n,i,f=1;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of %d is %d",n,f);
	
	
}
