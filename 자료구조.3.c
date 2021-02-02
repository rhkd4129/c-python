# include <stdio.h>


int main()
{
	int number[10][10];
	int row;
	int column;
	int c = 9;
	for (row = 0; row < 10; row++) {
		for (column = 0; column < 10; column++) {
			if (column == row)
			{
				number[row][column] = 1;
				printf("%d", number[row][column]);
			}

			else if (c == column  )  
			{
				number[row][c] = 1;
				printf("%d", number[row][c]);
				c--;
			}

			else
			{
				number[row][column] = 0;
				printf("%d", number[row][column]);
			}
		}
		printf("\n");
	}



	return 0;

}
