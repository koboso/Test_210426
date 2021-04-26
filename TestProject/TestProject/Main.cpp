#include "Main.h"

int top = -1;
int stack[STACK_SIZE];
void Push(int a);
int Pop();
bool IsStackEmpty();
bool IsStackFull();

void main() {
	Push(3);
	


	fgetc(stdin);
}

void Push(int a) {
	if (IsStackFull()) {
		printf("������ ����á���ϴ�. \n\n");
		return;
	}
	else {
		++top;
		stack[top] = a;
	}
}

int Pop() {
	if (IsStackEmpty()) {
		printf("���� ������ϴ�. \n\n");
	}
	else {
		printf("%d\n\n", top);
		return 0;
	}
}

bool IsStackEmpty() {
	if (stack < 0) return true;
	return false;
}

bool IsStackFull() {
	if (stack >= STACK_SIZE)  return true;
	return false;
}