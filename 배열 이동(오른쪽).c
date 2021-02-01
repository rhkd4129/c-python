 <stdio.h>

int main()
{
	int number[5];

	int a = 0;
	int	b = 0;
	int c = 0;
	int d = 0;

	// 배열입력
	for (a = 0; a < 5; a++)
	{
		printf("배열입력");
		scanf_s("%d", &number[a]);
	
	}

	//배열출력
	for (b = 0; b < 5; b++,c++)
	{		
		for(a=0;a<5-b;a++)
		{   
			printf("%d ", number[a+c]);
			
			if (a + c == 4)
			{

				for (d = 0; d < b; d++)
				{
					printf("%d ", number[d]);
				}
			}
		}	
		printf("\n");
	}

	return 0;
}