#include "Main.h"

void main() {
	Push(1);
	Push(90);
	Push(10);
	Push(20);
	Push(30);
	Push(40);
	Push(50);
	Push(60);
	Push(70);
	Push(80);
	Push(100);

	print_Stack();

	Pop();

	print_Stack();

	for (int i = 0; i < STACK_SIZE; i++) {
		int a = Pop();
	}

	fgetc(stdin);
}

void Push(int a) {
	
	if (IsStackFull()) {
		printf("스택이 가득찼습니다. \n\n");
	}
	else {
		top=top+1;
		stack[top] = a;
	}
}

int Pop() {
	if (IsStackEmpty()) {
		printf("\n 값이 비었습니다. \n\n");
		return 0;
	}
	else {
		printf("\n 튀어나온 값 : %d \n", stack[top]);
		int value = stack[top];
		top=top-1;
		return value;
	}
}

bool IsStackEmpty() {
	if (top < 0) return true;
	return false;
}

bool IsStackFull() {
	if (top >= STACK_SIZE-1)  return true;
	return false;
}

void print_Stack() {
	for (int i = top; i >= 0; i--) {
		printf("%d \n", stack[i]);
	}
}