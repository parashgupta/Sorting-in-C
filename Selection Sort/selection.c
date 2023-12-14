#include<stdio.h>
void display(int x[],int n);   //left to right
void show(int x[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++)
		{
			if(x[min]>x[j])
			  min=j;
		}
	if(i!=min)
	{
		int t=x[i];
		x[i]= x[min];
		x[min]=t;
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
