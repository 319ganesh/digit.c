#include<stdio.h>
c=0;
main()
{
	int a;
	printf("\n enter the integer");
	scanf("%d",&a);
	while(a>0)
	{
		a=a/10;
		c=c+1;
	}
	printf("\n the number of digits are:%d",c);
	return 0;
}
