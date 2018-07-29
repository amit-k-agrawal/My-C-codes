#include<stdio.h>
int main() 
{
	int n,rev=0,rem,n1;
	scanf("%d",&n);
	if(n<=10^1000)
	{
		n1=n;
		while(n1!=0)
		{
			rem=n1%10;
			rev=rev*10+rem;
			n1/=10;
		}
		if(n==rev)
		printf("yes");
		else
		printf("no");
	}
	return 0;
}
