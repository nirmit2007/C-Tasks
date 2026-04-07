#include <stdio.h>
int main()
{
	int n;
	printf("Enter your number : ");
	scanf("%d", &n);

	if (n >= 1)
	{

		if (n % 2 == 0)
		{
			printf("Your number is positive and even");
		}

		if (n % 2 == 1)
		{
			printf("Your number is positive and odd");
		}
	}

	else if (n <= -1)
	{
		if (n % 2 == 0)
		{
			printf("Your number negetive and even");
		}

		if (n % 2 == 1)
		{
			printf("Your number is negetive and odd");
		}
	}

	else
	{
		printf("your number zero ");
	}

	return 0;
}