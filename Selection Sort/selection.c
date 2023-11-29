#include<stdio.h>
void display(int x[],int n);   //left to right
void show(int x[],int n)
{
	int i,j,max,t;
	for(i=n;i>0;i--)
	{
		max =i;
		for(j=i-1;j>=0;j--)
		{
			if(x[max]<x[j])
				max=j;
		}
	if(i!=max)
	{
		t=x[i];
		x[i]= x[max];
		x[max]=t;
		display(x,8);
	}
	}
}

void display(int x[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	printf("%d\t",x[i]);
	printf("\n");
}

void main()
{
int x[] = {56,29,35,42,15,41,75,21};
display(x,8);
show(x,8);
display(x,8);
}