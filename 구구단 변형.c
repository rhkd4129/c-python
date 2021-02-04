#include <stdio.h>


int main()
{

	int s_number = 0;
	int l_number = 0;

	int a;
	int b;

	scanf_s("%d",&s_number);
	scanf_s("%d",&l_number);



	for (s_number; s_number <= l_number; s_number++)
	{
		for (a = 1; a < 10; a++)
		{
			printf("%d*%d = %2d", s_number, a, s_number * a);
			printf("\n");
		}
		

	}
	return 0;

}

