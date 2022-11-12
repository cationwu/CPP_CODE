#define _CRT_SECURE_NO_WARNINGS 1


//��Ч������(�ӿ���)
typedef char STDatatype;
typedef struct Stack
{
	STDatatype* a;
	int capacity;
	int top;   // ��ʼΪ0����ʾջ��λ����һ��λ���±�
}ST;
void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, STDatatype x);
void StackPop(ST* ps);
STDatatype StackTop(ST* ps);

bool StackEmpty(ST* ps);
int StackSize(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);

	ps->a = (STDatatype*)malloc(sizeof(STDatatype) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	ps->capacity = 4;
	ps->top = 0;
}

void StackDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

void StackPush(ST* ps, STDatatype x)
{
	assert(ps);

	//���ռ��Ƿ��㹻
	if (ps->capacity == ps->top)
	{
		STDatatype* tmp = (STDatatype*)realloc(ps->a, sizeof(STDatatype) * 2 * ps->capacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = 2 * ps->capacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	ps->top--;
}

STDatatype StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}
bool isValid(char* s) {
	ST st;
	StackInit(&st);
	while (*s)
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			StackPush(&st, *s);
			s++;
		}
		else
		{
			if (StackEmpty(&st))
			{
				StackDestroy(&st);
				return false;
			}
			if (StackTop(&st) == '(' && *s != ')' ||
				StackTop(&st) == '[' && *s != ']' ||
				StackTop(&st) == '{' && *s != '}')
			{
				StackDestroy(&st);
				return false;
			}
			s++;
			StackPop(&st);
		}
	}
	bool ret = StackEmpty(&st);
	StackDestroy(&st);
	return ret;

}