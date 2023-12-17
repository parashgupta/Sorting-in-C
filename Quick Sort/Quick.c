#include<stdio.h>
void display();
int show(int x[],int i,int n);
void QuickSort(int x[],int si,int n);

int x[] = {35,33,42,10,14,19,27,44,26,31}; //10 element in array
int n=9;	

int show(int x[],int i,int n)
{
	int p=i;
	int t;
	int pi = x[n];

	for(;i<n;i++)
	{
		if(x[i]<pi)
		{
			t=x[i];
			x[i]=x[p];
			x[p]=t;
			c++;
			p++;
		}
	}
	x[n]=x[p];
	x[p]=pi;
	display();
	return p;
}

void QuickSort(int x[],int si,int n)
{
	if(si>=n) return;
	int p = show(x,si,n);
	QuickSort(x,si,p-1);
	QuickSort(x,p+1,n);
}

void display()
{
	int i;
	for(i=0;i<=n;i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\n\n");
}

void main()
{
	display();
	QuickSort(x,0,n);
	display();
}
