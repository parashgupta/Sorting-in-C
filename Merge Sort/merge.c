#include<stdio.h>
void display(int x[],int n);
void merge(int a[],int b[],int x[],int n1, int n2);
void show(int x[],int n)
{
	if(n<=1) return;
	int m1 = n/2;
	int m2 = n-m1;
	int a[m1];
	int b[m2];
	for(int i=0;i<m1;i++)
	{
		a[i] = x[i];
	}
	for(int i=0;i<m2;i++)
	{
		b[i] = x[i+m1];
	}
	show(a,m1);
	show(b,m2);
	merge(a,b,x,m1,m2);
}

void merge(int a[],int b[],int x[],int n1, int n2)
{
	int i,j,k;
	for(i=0,j=0,k=0; i<n1 && j<n2;)
	{
		if(a[i]<b[j])
		{
			x[k++] = a[i++];
		}
		else
		{
			x[k++] = b[j++];
		}
	}

	while(i<n1)	x[k++] = a[i++];
	while(j<n2) x[k++] = b[j++];
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
int i;
int x[] = {56,12,19,29,75,35,43,21};
display(x,8);
show(x,8);
display(x,8);
}
