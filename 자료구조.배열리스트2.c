#include <stdio.h>
#include <stdbool.h>
#define LIST_MAX_SIZE (10)

struct infor
{
	int number[10];
	int size;
}list;

//리스트가 비어있으면 true반환
bool listzero() {
	if (list.size == 0)return true;
	else return false;
}

//리스트에 n이 있는지 검사 
bool isInlistN(int n) {
	for (int i = 0; i < LIST_MAX_SIZE; i++)
		if (list.number[i] == n) return true;
		 return false;
}

// 리스트의 n의 위치
int whereList_N(int n) {
	for (int i = 0; i < LIST_MAX_SIZE; i++) {
		if (list.number[i] == n) return i;
	}

}
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


void list_spend(int n){
	if (!isInlistN(n)) {
		printf("%d 가 없음", n);
		return;
	}
	else if(!listzero())
	{
		for (int i = 0; i < LIST_MAX_SIZE; i++)
		{
			if (list.number[i] == n)
			{
				for (int j = i; j < LIST_MAX_SIZE; j++) {
					list.number[j] = list.number[j+1];
				}
				list.size--;
			}
		}

	}
}


void list_Pos_Add(int pos, int n) {
	if (!listFull() && 0 <= pos && pos < LIST_MAX_SIZE)
	{
		for (int i = LIST_MAX_SIZE - 1; i <= pos; i--) 
			list.number[i + 1] = list.number[i];
		}
		
	list.number[pos] = n;
	list.size++;
}




	/*
	struct infor
	{
		int number[10];
		int size;
	}list;

	함수 목록
	1. bool listzero()			리스트가 비어 있으면 true 반환 
	2. bool isInlistN(int n)	리스트에 n이 있는지 검사 있으면 true반환
	3. int whereList_N(int n)	리스트에 n이 있는지 있으면 true 반환
	4. bool listFull()          리스트가 모두 차잇으면 true출력
	5. void listAdd(int n)      리스트끝에 n추가
	6. void print()				리스트요소 출력
	7. void list_Pos_Add(pos n ,int n)	리스트에 pos위치에 n추가

	*/ 
	

int main()
{
	for (int i = 0; i < LIST_MAX_SIZE; i++) {
		listAdd(i);
	}

	print();
	printf("\n");
	list_spend(5);
	print();
	list_Pos_Add(0, 4);
	printf("\n");
	print();
	printf("\n");

}
