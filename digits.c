#include <stdio.h>
int main(void) {
	int n=5657,rev=0,rem;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n%10;
	}
	printf("reverse=%d",rev);
	return 0;
