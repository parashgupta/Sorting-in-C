#include<stdio.h>
void display(int x[],int n);
void isort(int x[],int n)
{
int i,j;
	for(i=1;i<n;i++)
	{
		int value =x[i];
		for(j=i;j>0;j--)
		{
			if(x[j-1]>value)
			{
				x[j]=x[j-1];
			}
			else break;
		}
		x[j] = value;
		display(x,8);
	}	
}

void display(int x[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d\t",x[i]);
	printf("\n");
}

void main()
{
int x[] = {56,29,35,42,15,41,75,21};
display(x,8);
isort(x,8);
}