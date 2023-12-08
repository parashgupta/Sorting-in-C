#include<stdio.h>
void display(int x[],int n);	
void csort(int x[],int n,int g)
{
	if(g<=1) return;
	int i,t;
	for(i=0;i<n-g;i++)
	{
		if(x[i]>x[i+g])
		{
			t=x[i];
			x[i]=x[i+g];
			x[i+g]=t;
		}
	}
	display(x,n);
	csort(x,n,g/2);	
}
void isort(int x[],int n)
{
	int i,j,t,value;
	for(i=1;i<n;i++)
	{
		value = x[i];
		for(j=i;j>0 && x[j-1]>value;j--)
		{
			x[j] = x[j-1];
		}
		x[j]=value;
	}
}
void ssort(int x[],int n)
{
	display(x,11);
	csort(x,n,n/2);
	isort(x,n);
	display(x,11);
}

void display(int x[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	printf("%d\t",x[i]);
	printf("\n\n");
}

void main()
{
	int x[] = {4,0,3,2,7,1,8,9,11,5,6};
	ssort(x,11);
}