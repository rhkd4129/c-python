#include <stdio.h>


void basic_pyramid() {
	for (int i = 1; i < 6; i++) {
		for (int j = 0; j < i; j++) {

			printf("*");     


		}
		printf("\n");
	}

	/*
	*
	**
	***
	****
	*/
}
void pyramid_2() {
	int floor;
	int star;

	for (floor = 0; floor < 5; floor++) {

		for (star = 5 - floor; star > 0; star--) {
			printf("*");
		}

		printf("\n");
	}

	// ****
	// ***
	// **
	// *

}
void pyramid_3() {
	int star;
	int null;
	int floor;

	for (floor = 0; floor < 5; floor++) {

		for (null = 0; null < floor; null++) {
			printf(" ");
		}

		for (star = 5; star - floor; star--) {
			printf("*");
		}

		printf("\n");
	}

	//  ****
	//   ***
	//    **
	//     *
	
	
}
void pyramid_4() {
	int star = 5;
	int null;
	int floor;


	for (floor = 1; floor < 5; floor++) {

		//공백
		for (null = 4; null - floor; null--)
		{
			printf(" ");
		}

		//별
		for (star = 0; star < floor + 1; star++) {
			printf("*");
		}
		printf("\n");
	}
	//    *
	//   **
	//  ***
	// ****

}
void pyramid_5(void) {

	int floor;
	int null;
	int star;

	scanf("%d", &floor);



	for (int i = 0; i < floor; i++)
	{

		for (null = i; null < floor - 1; null++) {
			printf(" ");

		}

		for (star = 0; star < (i * 2) + 1; star++) {
			printf("*");
		}


		printf("\n");


	}


	//    *
	//   ***
	//  *****
	// *******


}
void star_stair() {
	int star;
	int null;
	int floor;
	int a;
	scanf("%d", &a);
	for (floor = 0; floor < a; floor++) {

		//공백
		for (null = 0; null < floor; null++) {
			printf(" ");

		}

		for (star = a; star > 0; star--) {
			printf("*");
		}
		printf("\n");
		// 별
	}


}



int main() {

	
}

