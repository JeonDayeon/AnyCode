#include<stdio.h>

void One();
void Two();

int main()
{
	One();
	Two();
}

void One()
{
	int ptr = 0;
	int i = 0, j = 0;
	int result[30];

	for (int num = 2; num <= 100; num++)
	{
		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
				break;
		}

		if (num == j)
		{
			result[ptr] = num;
			printf("%d ", result[ptr]);
			ptr++;
		}
	}
}

void One_ptr()
{
	int i = 0, j = 0;
	int result[30];
	int* ptr = &result[0];
	

	for (int num = 2; num <= 100; num++)
	{
		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
				break;
		}

		if (num == j)
		{
			result[0] = num;
			printf("%d ", result[0]);
			ptr++;
		}
	}
}

void Two()
{
	int num;
	int count = 0;
	int arr[8];
	
	printf("정수 입력: ");
	scanf("%d", &num);

	for (int i = 0; num > 0; i++)
	{
		arr[i] = num % 2;
		num = num / 2;
		count++;
	}

	for (int j = count-1; j >= 0; j--)
	{
		printf("%d", arr[j]);
	}
}
