#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX_LIST_SIZE (10)

typedef struct {
	int number[MAX_LIST_SIZE];
	int size;
}ArrayList;



//리스트의 초기화
void reset(ArrayList *list) {
	list->size = 0;
}

//리스트가 비어있으면  true 반환
bool l_null(ArrayList* list) {
	return list->size == 0;
}

//리스트가 꽉차있으면 true반환
bool l_full(ArrayList* list) {
	return list->size == MAX_LIST_SIZE;
}

//리스트 전체 요소 출력
void print(ArrayList* list) {
	for (int i = 0; i < list->size; i++) {
		printf("%d ",list->number[i]);
	}
}


//리스트에 n이 있으면 true 출력
bool l_n_in(ArrayList* list, int n) {
	for (int i = 0; i <= list->size; i++) {
		if (list->number[i] == n) return true;
	}
}

//리스트 끝에 n 추가
void l_last_n_add(ArrayList* list, int n) {
	if (!l_full(list))
	{
		list->number[list->size] = n;
		list->size++;
	}
	else {
		printf("리스트에 공간이 없음 !!\n");
	}
}

//리스트 pos위치에 n추가
void l_pos_n_add(ArrayList* list, int pos, int n) {
	if (!l_full(list)) {
		for (int i = list->size; i >= pos; i--) {
			list->number[i] = list->number[i - 1];
		}

		list->number[pos] = n;
		list->size++;
	}
	else {
		printf("리스트에 공간이 없음 !! \n");
	}
}

//리스트에서 n삭제
void l_remove_n(ArrayList* list, int n) {
	if (!l_null(list)) {
			for(int i=0;i<MAX_LIST_SIZE;i++){
				if (list->number[i] == n)
				{
					for (int j = i+1; j <= MAX_LIST_SIZE; j++)
					{
						list->number[j-1] = list->number[j];
					}
				}
			}
		list->size--;
	}
	else { printf("리스트가 비었음"); }
}

