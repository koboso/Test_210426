#include"Main.h"
#define S_SIZE 10//스택 사이즈 10은 매크로 처리

void main() {
	//스택은 FirstInLastOut 방식
	int top = 0;

	static int stack[S_SIZE];

	for (int i = 0; i < S_SIZE; i++)
	{
		stack[i] = NULL;
	}


}
//스택에 값을 저장할 Push()함수
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
//스택의 값을 불러 올 Pop()함수

//스택의 현재 인덱스를 알려 줄 Top()함수
//스택이 비었을 때 불러오면 "값이 비었습니다."를 출력하는 IsStackEmpty()함수
//스택이 가득 찼을 때 저장하면 "스택이 가득 찼습니다."를 출력하는 IsStackFull()함수
bool IsStackFull() {
	printf("스택이 가득 찼습니다.");
}