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
	int j;
	float num[30] =
	{
		1.2, 2.2, 3.3, 4.3, 5.3, 6.3, 7.3, 8.3, 9.3, 10.3,
		11.3, 12.3, 13.3, 14.3, 15.3, 16.3, 17.3, 18.3, 19.3, 20.3,
		21.3, 22.3, 23.3, 24.3, 25.3 , 26.3, 27.3, 28.3, 29.3, 30.3
	};

	for (int i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf(" %.1f", num[j + (i * 10)]);
			printf("\t");
	
		}
		printf("\n");
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
