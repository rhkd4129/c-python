#include <stdio.h>
#include <stdlib.h>


int main()
{
	char* pc = NULL;
	int* pi =  NULL;
	int i = 0;


	pc = (char*)malloc(100 * sizeof(char));
	if (pc == NULL)
	{
		printf("실패\n");
		exit(1);}

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("실패\n");
		exit(1);
	}

	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;

	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;
	}
	*(pc + i) = 0; //문자열의 끝 의미 NULL삽입


//출력
	for (i = 0; i < 5; i++) {
		printf("%d\n", *(pi + i));
	}

	
	printf("%s\n", pc);

	

	free(pi);
	free(pc);

	return 0;

}
