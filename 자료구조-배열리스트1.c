#include <stdio.h>
#include <stdbool.h>
#define LIST_MAX_SIZE (10)

struct infor
{
	int number[10];
	int size;
}list;


//리스트가 모두 차잇으면 true출력
bool listFull() {
	return(list.size == LIST_MAX_SIZE);
}

//리스트 끝에 n추가
void listAdd(int n) {
	if (!listFull()) {
		list.number[list.size] = n;
		list.size++;
	}
	else printf("list에 공간이 없음");
}


//리스트요소 출력
void print() {
	for (int i = 0; i < LIST_MAX_SIZE; i++) {
		printf("%d",list.number[i]);
	}
}


int main()
{

	/*
	struct infor
	{
		int number[10];
		int size;
	}list;

	함수 목록
	1.void print list.number()의 요소 출력
	2.void listAdd(int n) 리스트 끝에 n추가
	3. listFull리스트가 모두 차잇으면 true출력
	*/
	for (int i = 0; i < 9; i++)
	{
		listAdd(i);
	}
	
	print();
	printf("\n");
	listAdd(5);
	print();
	printf("\n");

}
