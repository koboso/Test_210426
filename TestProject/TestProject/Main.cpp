#include"Main.h"
#define S_SIZE 10//���� ������ 10�� ��ũ�� ó��

void main() {
	//������ FirstInLastOut ���
	int top = 0;

	static int stack[S_SIZE];

	for (int i = 0; i < S_SIZE; i++)
	{
		stack[i] = NULL;
	}


}
//���ÿ� ���� ������ Push()�Լ�
void Push(int a) {
	if (stack[S_SIZE - 1] == NULL;){
		stack[top] = a;
		top++;
	}
	else
	{
		IsStackFull();
	}
	
}
//������ ���� �ҷ� �� Pop()�Լ�

//������ ���� �ε����� �˷� �� Top()�Լ�
//������ ����� �� �ҷ����� "���� ������ϴ�."�� ����ϴ� IsStackEmpty()�Լ�
//������ ���� á�� �� �����ϸ� "������ ���� á���ϴ�."�� ����ϴ� IsStackFull()�Լ�
bool IsStackFull() {
	printf("������ ���� á���ϴ�.");
}