#include<stdio.h>

void fineOutOddNum(int n)
{
	if (n <= 0)
	{
		printf("error!!!\n");
	}
	else
	{
		for (int i = 1; i <= n; i+=2)
		{
			printf("%d ", i);
		}
	}
}

int main(void)
{
	printf("Please input the number -- n:\n");
	int n = 0;
	scanf_s("%d", &n);
	fineOutOddNum(n);
	return 0;
}