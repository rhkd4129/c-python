#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX_STACK_SIZE (5)


typedef struct {
	int stack[MAX_STACK_SIZE];
	int top;

}Stack;

void reset(Stack* s) {
	s->top = -1;
}

bool s_null(const Stack *s) {
	return(s->top == -1);
}

bool s_full(const Stack *s) {
	return(s->top == (MAX_STACK_SIZE - 1));
}

void push(Stack *s ,int e) {
	if (s_full(s)) {
		printf("스택이 꽉참");
		exit(1);
	}
	else {

		s->top++;
		s->stack[s->top] = e;
	}
}

int pop(Stack *s) {
	if (s_null(s)) {
		printf("스택이 비엇음");
		exit(1);
	}
	else {
		return s->stack[(s->top)--];
	}
}
/*
bool s_null(const *s) 스택이 비어있는지
bool s_full(const *s) 스택이 꽉차 있는지
void reset(Stack *s) 스택초기화
void push(Stack *s int e  )스택a에 e추가
void pop(Stack *s)스택에서 e삭제하고반환
*/

int main() 
{
	Stack s;
	reset(&s);
	push(&s, 0);
	printf("%d\n", s.top);
	push(&s, 1); 
	printf("%d\n", s.top);
	push(&s, 3);
	printf("%d\n", s.top);

	printf("%d /", s.stack[0]);
	printf("%d\n", s.top);

	printf("%d /", s.stack[1]);
	printf("%d\n", s.top);




	return 0;
}
