#include<stdio.h>
int main() 
{
	int N,Q,i;
	scanf("%d%d",&N,&Q);
	if(N<=100000&&Q<=100000)
	{
		if(N%2==0)
		for(i=N+1;i<Q;i+=2)
		printf("%d ",i);
		else
		for(i=N+2;i<Q;i+=2)
		printf("%d ",i);
	}
	return 0;
}
