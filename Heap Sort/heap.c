#include<stdio.h>
void heapify(int x[],int n,int i)
{
	int t;
	int l= i*2+1;
	int r= i*2+2;
	int max=i;
	if(r<n)
	{
		if(x[l]>x[r])
		{
			max=l;
		}
		else
		{
			max=r;
		}
	}
	else if(l<n)
	{
		max =l;
	}
	
	if(x[max]>x[i])
	{
	t= x[i];
	x[i]=x[max];
	x[max]=t;	
	heapify(x,n,max);
	}
}
void heap(int x[],int n)
{
	int i;
	for(i=n/2-1;i>=0;i--)
	{
		heapify(x,n,i);
	}
}

void delete(int x[],int n)
{
	int i,t;
	for(i=n-1;i>0;i--)
	{
		t=x[0];
		x[0]=x[i];
		x[i]=t;
		// heap(x,i);
		heapify(x,i,0);
	}		
}

void main()
{
	int x[] = {10,12,3,24,5,6,7};
	heap(x,7);
	delete(x,7);
	for(int i=0;i<7;i++)
	printf("%d\t",x[i]);
}