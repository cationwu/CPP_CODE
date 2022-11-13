#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void TestStack1()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	printf("%d\n", StackTop(&st));
	StackPush(&st, 5);
	printf("%d\n", StackTop(&st));


	printf("size:%d\n", StackSize(&st));
	
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	//StackPop(&st);
	//printf("%d\n", StackTop(&st));

	StackDestroy(&st);
}

int main()
{
	TestStack1();

	return 0;
}