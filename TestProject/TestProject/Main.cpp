#include"Main.h"
#define S_SIZE 10//스택 사이즈 10은 매크로 처리

void main() {
	//스택은 FirstInLastOut 방식
	static int top = 0;

	static int stack[S_SIZE];

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
			printf("%d",a);
		}
}
//스택에 값을 저장할 Push()함수
void Push(int a) {
	if (IsStackFull() == true){
		printf("스택이 가득 찼습니다.\n")
	}
	else
	{
		stack[top] = a;
		top++;
	}
}
//스택의 값을 불러 올 Pop()함수
int Pop() {
	if (IsStackEmpty() == true) {
		printf("값이 비었습니다.\n");
		return 0;
	}
	else {
		top--;
		return stack[top + 1];		
	}
}
//스택의 현재 인덱스를 알려 줄 Top()함수
//스택이 비었을 때 불러오면 "값이 비었습니다."를 출력하는 IsStackEmpty()함수
bool IsStackEmpty() {
	if (stack[0] == NULL) {
		return true;
	}
	else return false;
}
//스택이 가득 찼을 때 저장하면 "스택이 가득 찼습니다."를 출력하는 IsStackFull()함수
bool IsStackFull() {
	if (top >= S_SIZE) {
		return true;
	}
	else return false;
}