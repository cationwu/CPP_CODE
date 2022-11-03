#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//void TestSeqList()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(&sl);
//
//	SLPopBack(&sl);
//	SLPrint(&sl);
//
//	SLPushBack(&sl, 8);
//	SLPrint(&sl);
//
//	SLDestroy(&sl);
//}
//
//void TestSeqList2()
//{
//	SL sl;
//	SLInit(&sl);
//
//	SLPushFront(&sl, 1);
//	SLPushFront(&sl, 2);
//	SLPushFront(&sl, 3);
//	SLPushFront(&sl, 4);
//
//	SLPrint(&sl);
//
//	SLPopFront(&sl);
//	SLPopFront(&sl);
//	SLPopFront(&sl);
//	SLPopFront(&sl);
//	//SLPopFront(&sl);
//	SLPrint(&sl);
//
//	SLPushBack(&sl, 10);
//	SLPrint(&sl);
//
//	SLDestroy(&sl);
//}
//
//void TestSeqList3()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(&sl);
//
//	SLInsert(&sl, 2, 20);
//	SLPrint(&sl);
//
//	SLInsert(&sl, 5, 500);
//	SLPrint(&sl);
//
//	SLInsert(&sl, 0, 500);
//	SLPrint(&sl);
//
//	SLDestroy(&sl);
//}
//
//void TestSeqList4()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(&sl);
//
//	SLErase(&sl, 2);
//	SLPrint(&sl);
//
//	SLErase(&sl, 2);
//	SLPrint(&sl);
//
//	SLErase(&sl, 0);
//	SLPrint(&sl);
//
//	SLDestroy(&sl);
//}
//
//void TestSeqList5()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPushBack(&sl, 5);
//	SLPushBack(&sl, 7);
//	SLPushBack(&sl, 5);
//	SLPushBack(&sl, 8);
//	SLPushBack(&sl, 5);
//	SLPrint(&sl);
//
//	int pos = SLFind(&sl, 4, 0);
//	if (pos != -1)
//	{
//		SLErase(&sl, pos);
//	}
//	SLPrint(&sl);
//
//	// 删除顺序表所有的5
//	pos = SLFind(&sl, 5, 0);
//	while (pos != -1)
//	{
//		SLErase(&sl, pos);
//
//		pos = SLFind(&sl, 5, pos);
//	}
//	SLPrint(&sl);
//
//	SLDestroy(&sl);
//}
//
//int main()
//{
//	//TestSeqList();
//	//TestSeqList2();
//	//TestSeqList3();
//	//TestSeqList4();
//	TestSeqList5();
//
//	return 0;
//}

