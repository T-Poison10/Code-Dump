#include <stdio.h>
#include<string.h>
int recursion(int x);
int main()
{
	int a, hold;
	printf("Enter a number to check weather it is armstrong or not:");
	scanf("%d",&a);
	hold=recursion(a);
	if (hold==1)
	{
		printf("Armstrong");
	}
}
int recursion(int x)
{
	int b;
	b=x;
	return recursion(x*x*x);
}
