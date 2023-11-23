#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Name:Shivishun.A\nReg.no:192221146\nEnter last number of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("%d\n",i);
	}
	printf("sum=%d",sum);
	return 0;
}
