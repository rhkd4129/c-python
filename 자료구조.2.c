#include <stdio.h>


int main()
{

	int number[10][10];

	int row;
	int column;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++) {
			if (row >= column)
			{
				number[row][column] = row;
				printf("%3d", number[row][column]);

			}
			else
			{
				number[row][column] = column;
				printf("%3d", number[row][column]);
			}
			
		}
		printf("\n");

	}


	return 0;

}
