#include "Main.h"

int top = 0;
void Push(int);
int Pop();
bool IsStackEmpty();
bool IsStackFull();

void main() {
	Push(2);
	Pop();
	fgetc(stdin);
}

void Push(int a) {
	top = a;
}

int Pop() {
	if (top!=NULL) {
		printf("%d \n\n", top);
	}
	else {
		IsStackEmpty();
	}
	return 0;
}

bool IsStackEmpty() {
	printf("값이 비었습니다. \n\n");
	return 0;
}

bool IsStackFull() {
	printf("스택이 가득찼습니다. \n\n");
	return 0;
}