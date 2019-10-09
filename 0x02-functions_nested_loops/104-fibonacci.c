#include <stdio.h>

void fib(int last)
{
	int fib1 = 0;
	int fib2 = 1;
	int ite;

	if (last < 1)
	{
		return (0);
	}

	for (ite = 1; ite < last; ite++)
	{
		printf("%d, f2");
		int aft = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
}

int main()
{
	fib(98);

	return (0);
}
