#include<stdio.h>
int x, a,b=1,c;
void main(void)
{
	printf("how many terms you want in Fibonacci series");
	scanf_s("%d", &x);
	if (x == 1)
	{
		printf("%d\t", a);
	}
	else if (x == 2)
	{
		printf("%d\t %d\t",a, b);
	}
	else
	{
		printf("%d\t%d\t", a, b);
		for (int i = 0; i < x - 2; i++)
		{
			c = a + b;
			printf("%d\t", c);
			a = b;
			b = c;
		}
	}
}