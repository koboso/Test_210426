#include"Main.h"
#define S_SIZE 10//���� ������ 10�� ��ũ�� ó��
int stack[S_SIZE];
int top = 0;


void main() {
	//������ FirstInLastOut ���


	for (int i = 0; i < S_SIZE; i++)
	{
		stack[i] = NULL;
	}
	Push(1);
	Push(2);
	Push(3);
	Push(4);
	
	for (int i = 0; i < S_SIZE; i++)
	{
		int a = Pop();
		if (top < 0) break;

		else {
			printf("%d \n", a);
		}
	}
}

	//������ ����� �� �ҷ����� "���� ������ϴ�."�� ����ϴ� IsStackEmpty()�Լ�
	bool IsStackEmpty() {
		if (top == -1) {
			return true;
		}
		else return false;
	}
	//������ ���� á�� �� �����ϸ� "������ ���� á���ϴ�."�� ����ϴ� IsStackFull()�Լ�
	bool IsStackFull() {
		if (top >= S_SIZE) {
			return true;
		}
		else return false;
	}
//���ÿ� ���� ������ Push()�Լ�
void Push(int a) {
	if (IsStackFull() == true){
		printf("������ ���� á���ϴ�.\n");
	}
	else
	{
		++top;
		stack[top] = a;
	}
}
//������ ���� �ҷ� �� Pop()�Լ�
int Pop() {
	if (IsStackEmpty() == true) {
		printf("���� ������ϴ�.\n");
		return 0;
	}
	else {
		top--;
		return stack[top + 1];		
	}
}
//������ ���� �ε����� �˷� �� Top()�Լ�
