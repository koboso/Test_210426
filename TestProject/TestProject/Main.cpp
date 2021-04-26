#include"Main.h"


#define SIZE 10
int array[SIZE] = { 0 };
int top;
void main() {
	int i;
	Push(10);
	Push(5);
	Push(7);
	Push(1);
	Push(60);

	for (i = 0; i <= SIZE; i++) {
		if (top == 0) break;
		printf("%d\n", Pop());
	}
	printf("끝");
	fgetc(stdin);
}

void Push(int k)
{
	if (IsStackFull()) {
	printf("스택 풀 에러!\n");
	return;
}
		
	array[top] = k;
	top++;
}

int Pop()
{
	if (IsStackEmpty()) {
		printf(" 스택 비었음!\n");
		return 0;
	}
	top--;
	return array[top];
}
bool IsStackEmpty() {
	if (top == 0) return true;
	return false;
	
}
bool IsStackFull() {
	if (top == SIZE) return true;
	return false;
}