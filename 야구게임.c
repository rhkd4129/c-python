#include <stdio.h>

int main()
{
	int rand[3] = { 3,6,9 };
	int count = 0;
	printf("Start Game\n");

	while (1 < 2)
	{
		int number[3];
		int strike = 0;
		int ball = 0;

		int a, b;
		printf("\n\n3개의 숫자 입력\n");
		scanf("%d  %d  %d", &number[0], &number[1], &number[2]);
		count++;

		//strike 검사
		for (a = 0; a < 3; a++)
		{
			if (number[a] == rand[a])
			{
				strike++;
			}
		}
		if (strike == 3)
			break;


		//ball 검사
		for (b = 0; b < 3; b++)
		{
			for (a = 0; a < 3; a++)
			{
				if (number[a] != rand[a] && number[b] == rand[a])
					ball++;
			}
		}
		printf("%d strike  %d ball \n", strike, ball);
		printf("시도횟수 : %d", count);
	}

	printf("성공!!!\n");
	printf("시도횟수 : %d", count);

	return 0;
}
