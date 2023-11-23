#include<stdio.h>
int main()
{
	int n,a=0,b=1,temp,sum,i;
	printf("Name:Shivishun.A\nReg.no:192221146\nEnter last number of series:");
	scanf("%d",&n);
	printf("Fibonacci series: \n");
	printf("%d\n%d\n",a,b,b);
	sum=a+b;
	while(sum<=n)
	{
		printf("%d\n",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
	return 0;
}
