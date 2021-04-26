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
	printf("��");
	fgetc(stdin);
}

void Push(int k)
{
	if (IsStackFull()) {
	printf("���� Ǯ ����!\n");
	return;
}
		
	array[top] = k;
	top++;
}

int Pop()
{
	if (IsStackEmpty()) {
		printf(" ���� �����!\n");
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