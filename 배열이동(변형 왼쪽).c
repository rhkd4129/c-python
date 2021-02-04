#include <stdio.h>




int main()
{
	int a_sz = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d =0;
	int number[100];


	scanf_s("%d", &a_sz);


	//배열 요소 입력
	for (b = 0; b < a_sz; b++)
	{
		scanf_s("%d", &number[b]);
	}


	for (b = 0; b < a_sz; b++,c++)
	{
		for (a = 0; a <= a_sz-b; a++)
		{

			if (a + c == a_sz)
			{
				for (d = 0; d < b; d++)

					printf("%d ", number[d]);
			}
			
			else
			{
				printf("%d ", number[a+c]);
			}

		}

		printf("\n");
	}

	return 0;
}
