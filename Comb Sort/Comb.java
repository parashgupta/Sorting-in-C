class Comb
{
	static int count = 1;
	static void comb(int x[],int n,int g)
	{
		if(g<1) g=count--;
		if(g<1) return;
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
		comb(x,n,(int)(g/1.3));	
	}
	
	static void display(int x[],int n)
	{
		int i,j;
		for(i=0;i<n;i++)
		System.out.printf("%d\t",x[i]);
		System.out.printf("\n\n");
	}
	
	public static void main(String ar[])
	{
		int x[] = {4,0,3,2,7,1,8,9,11,5,6};
		int n=11;
		display(x,n);
		comb(x,n,(int)(n/1.3));
	}
}