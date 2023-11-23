#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Name:Shivishun.A\nReg.no:192221146\nEnter last number of series:");
	scanf("%d",&n);
	printf("Even numbers:");
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
		else
		{
			continue;
		}
	}
	printf("sum=%d",sum);
	return 0;
}
