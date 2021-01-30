#include <stdio.h>


int main()
{
	int a = 0;
	int b = 0;
	int	even_numebr_add = 0;


	printf("정수입력");
	scanf_s("%d", &a);
	

	for(b=1;b<=a;b++)
		if (b % 2 == 0)
		{
			even_numebr_add = even_numebr_add + b;
		}
	printf("%d", even_numebr_add);


	

	return 0;
}
