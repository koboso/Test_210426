#include"Main.h"

void main() {
	Push(10);
	Push(20);
	Push(30);
	Push(40);
	Push(50);
	Push(60);

	
			for (int i = 0; i < STACK_SIZE; i++) {
				int a = Pop();
				if(a== -1()
				printf("%d\n", Pop());
		}
		if IsStackEmpty(Pop<=0) {
			printf("���� ������ϴ�.")
		}
		else {
			break;
		}

		fgetc(stdin);
}

bool IsStackEmpty() {
	if (top < 0) return true;

	return  false;
}

bool IsStackFull() {
	if (top >= STACK_SIZE_-1) return true;

	return false;

}

void Push(int a) {

	if (IsStackFull()) {
		printf("������ ����á���ϴ�.\n");
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
/*
�߰��� ����

*********** ������ �����ϼ���.********************

���� : FILO Ư¡�� �������ִ� �ڷᱸ���Դϴ�.

������ ���� ������ �������ֽ��ϴ�.
Push : ���� �����ϴ� ����
Pop : ���� �ҷ����� ����

������ ����(������ġ) �̸��� top �̶�� �մϴ�.

----------------------------------------------

�Ʒ��� �������Ѿ߸� �մϴ�.

������ ���� �����ϴ� Push �Լ��� �־���մϴ�.
������ ���� �������� Pop �Լ��� �־���մϴ�.
������ ���� �ε����� top �̶�� ����������ؾ� �մϴ�


������ ������� Pop���ϸ� "���� ������ϴ�" �� ����ؾ��ϰ�, ���� �ҷ��������ƾ��մϴ�.
���� �Լ��� IsStackEmpty()�Լ��� �������մϴ�.

������ ����á���� Push�� �ϸ� "������ ����á���ϴ�"�� ����ϰ�. ���� �������� ���ƾ��մϴ�.
���� �Լ��� IsStackFull()�Լ��� �������մϴ�.

�����ǻ�����10
��ũ�η� ��������

*/