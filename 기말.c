#include<stdio.h>

void One();
void Two();
void One_ptr();
//-------------------------------------------------------------------------------------선언부

int main()
{
	One();
	Two();
}
//-------------------------------------------------------------------------------------메인 함수

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
//-------------------------------------------------------------------------------------1번 문제

void One_ptr()
{
	int i = 0, j = 0;
	int result[30];
	int* ptr = &result[0];
	
	*ptr = 1;
	printf("%d ", *ptr);

	for (int num = 2; num <= 100; num++)
	{
		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
				break;
		}
	
		if (num == j)
		{
			*ptr = num;
			printf("%d ", *ptr);
			ptr++;
		}
	}
}
//-------------------------------------------------------------------------------------1번 문제 심화

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
//-------------------------------------------------------------------------------------2번 문제
