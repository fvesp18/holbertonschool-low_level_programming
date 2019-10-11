#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int ind = 1;
	int prod = 1;

	if (argc > 1)
	{
		for (; ind < argc; ind++)
		{
			prod *= atoi(argv[ind]);
		}
		printf("%d\n", prod);
	}

	if (argc == 1)
		printf("Error\n");

       	return (1);

}
