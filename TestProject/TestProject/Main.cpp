#include"Main.h"

void main() {

	
	Push(10);
	Push(20);
	/// <summary>
	/// //
	/// </summary>
	Push(30);
	Push(50);
	Push(70);
	Push(90);


	for (int i = 0; i < STACK_SIZE_; i++) {

		int a = Pop();
		if (a == -1) break;

		printf("%d \n", a);
	}



	fgetc(stdin);

}



bool IsStackEmpty() {
	if (top < 0) return true;
	return false;
}

bool IsStackFull() {
	if (top >= STACK_SIZE_-1) return true;

	return false;
}

void Push(int a) {
	if (IsStackFull()) {
		printf("Ω∫≈√¿Ã ∞°µÊ√°Ω¿¥œ¥Ÿ.\n");
		return;
	}
	++top;
	stack[top] = a;
}

int Pop() {

	if (IsStackEmpty()) {
		return -1;
	}

	int value = stack[top];
	top--;
	return value;
	
}