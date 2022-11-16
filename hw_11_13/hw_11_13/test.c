#define _CRT_SECURE_NO_WARNINGS 1


//用队列实现栈(接口型)
//typedef int QDataType;
//typedef struct QueueNode
//{
//	QDataType data;
//	struct QueueNode* next;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//	int size;
//}Queue;
//
//void QueueInit(Queue* pq);
//void QueueDestroy(Queue* pq);
//void QueuePush(Queue* pq, QDataType x);
//void QueuePop(Queue* pq);
//QDataType QueueFront(Queue* pq);
//QDataType QueueBack(Queue* pq);
//bool QueueEmpty(Queue* pq);
//int QueueSize(Queue* pq);
//
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//
//	pq->head = NULL;
//	pq->tail = NULL;
//	pq->size = 0;
//}
//
//void QueueDestroy(Queue* pq)
//{
//	assert(pq);
//
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		QNode* del = cur;
//		cur = cur->next;
//
//		free(del);
//		//del = NULL;
//	}
//
//	pq->head = pq->tail = NULL;
//	pq->size = 0;
//}
//
//void QueuePush(Queue* pq, QDataType x)
//{
//	assert(pq);
//
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//
//	newnode->data = x;
//	newnode->next = NULL;
//
//	if (pq->tail == NULL)
//	{
//		pq->head = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//
//	pq->size++;
//}
//
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* del = pq->head;
//		pq->head = pq->head->next;
//
//		free(del);
//	}
//
//	pq->size--;
//}
//
//QDataType QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->data;
//}
//
//QDataType QueueBack(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->data;
//}
//
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//
//	return pq->head == NULL && pq->tail == NULL;
//}
//
//// 1G = 1024MB
//// 1024MB = 1024*1024KB
//// 1024*1024KB = 1024*1024*1024Byte
//
//int QueueSize(Queue* pq)
//{
//	assert(pq);
//
//	/*int size = 0;
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		cur = cur->next;
//		++size;
//	}
//
//	return size;*/
//
//	return pq->size;
//}
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&obj->q1);
//	QueueInit(&obj->q2);
//
//	return obj;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1, x);
//	}
//	else
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	Queue* emptyQ = &obj->q1;
//	Queue* nonemptyQ = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		emptyQ = &obj->q2;
//		nonemptyQ = &obj->q1;
//	}
//	while (QueueSize(nonemptyQ) > 1)
//	{
//		QueuePush(emptyQ, QueueFront(nonemptyQ));
//		QueuePop(nonemptyQ);
//	}
//	int top = QueueFront(nonemptyQ);
//	QueuePop(nonemptyQ);
//	return top;
//}
//
//int myStackTop(MyStack* obj) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&obj->q1);
//	}
//	else
//	{
//		return QueueBack(&obj->q2);
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//	free(obj);
//}

//用栈实现队列(接口型)
//typedef int STDatatype;
//typedef struct Stack
//{
//	STDatatype* a;
//	int capacity;
//	int top;   // 初始为0，表示栈顶位置下一个位置下标
//}ST;
//
//void StackInit(ST* ps);
//void StackDestroy(ST* ps);
//void StackPush(ST* ps, STDatatype x);
//void StackPop(ST* ps);
//STDatatype StackTop(ST* ps);
//
//bool StackEmpty(ST* ps);
//int StackSize(ST* ps);
//
//void StackInit(ST* ps)
//{
//	assert(ps);
//
//	//ps->a = NULL;
//	//ps->top = 0;
//	//ps->capacity = 0;
//
//	ps->a = (STDatatype*)malloc(sizeof(STDatatype) * 4);
//	if (ps->a == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//
//	ps->top = 0;
//	ps->capacity = 4;
//}
//
//void StackDestroy(ST* ps)
//{
//	assert(ps);
//
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}
//
//void StackPush(ST* ps, STDatatype x)
//{
//	assert(ps);
//
//	if (ps->top == ps->capacity)
//	{
//		STDatatype* tmp = (STDatatype*)realloc(ps->a, ps->capacity * 2 * sizeof(STDatatype));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//		ps->capacity *= 2;
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//
//	ps->top--;
//}
//
//STDatatype StackTop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//
//	return ps->a[ps->top - 1];
//}
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//
//	/*if (ps->top == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}*/
//
//	return ps->top == 0;
//}
//
//int StackSize(ST* ps)
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//typedef struct {
//	ST pushst;
//	ST popst;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* pq = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&pq->pushst);
//	StackInit(&pq->popst);
//	return pq;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->pushst, x);
//
//}
//
//int myQueuePeek(MyQueue* obj);
//int myQueuePop(MyQueue* obj) {
//	int peek = myQueuePeek(obj);
//	StackPop(&obj->popst);
//	return peek;
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (StackEmpty(&obj->popst))
//	{
//		while (!StackEmpty(&obj->pushst))
//		{
//			StackPush(&obj->popst, StackTop(&obj->pushst));
//			StackPop(&obj->pushst);
//		}
//	}
//	return StackTop(&obj->popst);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->pushst);
//	StackDestroy(&obj->popst);
//	free(obj);
//}

//设计循环队列（接口型）
//typedef struct {
//    int* a;
//    int front;
//    int rear;
//    int k;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    //多开一个空间，解决判满问题
//    obj->a = (int*)malloc(sizeof(int) * (k + 1));
//    obj->front = 0;
//    obj->rear = 0;
//    //队列满时存的数据个数，空间大小为k+1
//    obj->k = k;
//    return obj;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//    return (obj->rear + 1) % (obj->k + 1) == obj->front;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj))
//    {
//        return false;
//    }
//    obj->a[obj->rear++] = value;
//    obj->rear %= (obj->k + 1);
//    return true;
//
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return false;
//    }
//    obj->front++;
//    obj->front %= (obj->k + 1);
//    return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//    return obj->a[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//    return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
//}
//
//
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    free(obj);
//}