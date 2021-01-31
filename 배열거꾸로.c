#include <stdio.h>

int main()
{
	int number[1000];

	int rote;
	int a, b;


	scanf_s("%d", &rote);

	//배열입력
	for (a = 0; a < rote; a++)
		scanf_s("%d", &number[a]);


	//배열출력
	
		for (a = rote-1; a >= 0; a--)
		{
			printf("%d ", number[a]);
		}
		printf("\n");
	


	return 0;
}