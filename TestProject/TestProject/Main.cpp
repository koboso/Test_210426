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
	printf("���� ������ϴ�. \n\n");
	return 0;
}

bool IsStackFull() {
	printf("������ ����á���ϴ�. \n\n");
	return 0;
}