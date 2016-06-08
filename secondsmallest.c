#include <stdio.h>

void main()
{
	int a[10],i,j,n,temp;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
			{
				if(a[i]>a[j])
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		 }
	}

			printf("second smallest element is %d",a[1]);
	getch();
}
