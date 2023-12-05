#include<stdio.h>
void display(int x[],int n);
void show(int x[],int n, int div)
{
	int i;
	int a[10]={0};
	int y[n];
	int min = x[0];

	for(i=1;i<n;i++)
	{
		if(min>x[i]) min =x[i];
	}	

	for(i=0;i<n;i++)
	{
		a[(x[i]-min)/div%10]++;
	}
	
	for(i=1;i<n;i++)
	{
		a[i]+= a[i-1];
	}
	
	for(i=n-1;i>=0;i--)
	{
		y[a[(x[i]-min)/div%10]-=1] = x[i];
	}
	
	for(i=0;i<n;i++)
	{
		x[i]=y[i];
	}
}

void rsort(int x[],int n)
{
	int i;
	int max = x[0];
	int min = x[0];
	for(i=1;i<n;i++)
	{
		if(min>x[i]) min =x[i];
		if(max<x[i]) max =x[i];
	}	

	max-=min;

	for(i=1;i<=max;i*=10)
	{
		show(x,n,i);
		display(x,11);
	}
}

void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\n\n");
}

void main()
{
	int x[] = {7,-12,8,14,-2,0,6,-3,11,-10,13};
	display(x,11);
	rsort(x,11);
}