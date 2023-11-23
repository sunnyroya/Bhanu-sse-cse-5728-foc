#include<stdio.h>
int main()
{
	int n,i;
	printf("Name:Shivishun.A\nReg.no:192221146\nEnter the last number of series:");
	scanf("%d",&n);
	for(i=1;i<n;)
	{
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
