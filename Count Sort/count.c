#include<stdio.h>
void count(int x[],int n)
{
	int i;
	int y[n];
	int max = x[0];
	int min = x[0];
	
	for(i=1;i<n;i++)
	{
		if(min>x[i])  min = x[i];
		if(max<x[i])  max = x[i];
	}
	
	max++;
	int a[max-min];

	for(i=0;i<max-min;i++)
	{
		a[i]=0;
	}

	for(i=0;i<n;i++)
	{
		a[x[i]-min]++;
	}

	for(i=1;i<max-min;i++)
	{
		a[i]=a[i]+a[i-1];
	}
	for(i=0;i<n;i++)
	{
		y[a[x[i]-min]-=1] = x[i];
	}

	for(i=0;i<n;i++)
	{
		x[i] =y[i];
	}
}

void main()
{
int x[] = {2,-7,-8,1,-400,3,52,9};
count(x,8);
int i;
for(i=0;i<8;i++)
{
printf("%d\t",x[i]);
}
}