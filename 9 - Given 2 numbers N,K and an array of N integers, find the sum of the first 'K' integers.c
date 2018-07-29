#include<stdio.h>
int main() 
{
	int i=0,N,K,out=0,a[50];
	scanf("%d%d",&N,&K);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<K;i++)
	out+=a[i];
	printf("%d",out);
	return 0;
}
