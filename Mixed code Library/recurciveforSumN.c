#include<stdio.h>
int s=0;
int sum(int n)
{
	if(n==1)
		return 2;
	printf("%d\n",s);
	return s=s+sum(n-1);
}

 int main()
{
	int n;
	scanf("%d",&n);
	sum(n);
    printf("%d\n",s);
	return 0;
}