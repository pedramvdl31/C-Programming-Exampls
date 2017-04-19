#include<stdio.h>

int main()
{
	int var1 = 10;
	int var2 = 20;
	int var3 = sum(var1, var2);
	printf("%d", var3);
	return 0;
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}