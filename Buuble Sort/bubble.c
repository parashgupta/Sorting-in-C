#include<stdio.h>
void main()
{
int x[] = {12,32,49,6,5};
int n=5;
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(x[j]>x[j+1])
			{
				int t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	for(int k=0;k<n;k++)
	{
		printf("%d\t",x[k]);
	}
}