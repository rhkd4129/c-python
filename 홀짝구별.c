#include <stdio.h>

void even_number(void);
void odd_number(void);


int number[10];


int main()
{	
	
	int i = 0;


	for (i = 0; i < 10; i++)
	{
		printf("10개의정수입력");
		scanf_s("%d", &number[i]);

	}
	
	even_number();
	printf("\n");
	odd_number();




 
	


	return 0;

}

void even_number(void)
{
	printf("짝수출력");
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (number[i] % 2 == 0)
			printf("%2d", number[i]);

	}
}


void odd_number(void) 
{
	int i = 0;
	printf("홀수출력");
	for (i = 0; i < 10; i++)

	{
		if (number[i] % 2 != 0)
			printf("%2d", number[i]);

	}

}
