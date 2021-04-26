#include"Main.h"

void main() {

	Push(10);
	Push(2);

	int a = Pop();

	for (int i = 0; i < STACK_SIZE; i++) {
		printf("%d ", Pop());
	}

	fgetc(stdin);

}