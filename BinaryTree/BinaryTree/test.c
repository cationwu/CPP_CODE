#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

//前序遍历
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

//中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

//后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->left = node->right = NULL;
	return node;
}

//求二叉树结点个数

int size = 0;
void TreeSize1(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	size++;
	TreeSize1(root->left);
	TreeSize1(root->right);
}

int TreeSize2(BTNode* root)
{
	return root == NULL ? 0 : TreeSize2(root->left) + TreeSize2(root->right) + 1;
}

//叶子结点
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

//树的高度
int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}

//求第k层的节点个数 k >= 1
int TreeKLevelSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return TreeKLevelSize(root->left, k - 1) + TreeKLevelSize(root->right, k - 1);
}

//二叉树查找值为x的结点
BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	BTNode* ret1 = TreeFind(root->left, x);
	if (ret1)
	{
		return ret1;
	}
	BTNode* ret2 = TreeFind(root->right, x);
	if (ret2)
	{
		return ret2;
	}
	return NULL;
}

//层序遍历
void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		printf("%d ", front->data);
		QueuePop(&q);

		if (front->left)
		{
			QueuePush(&q, front->left);
		}

		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	printf("\n");

	QueueDestroy(&q);
}

//判断二叉树是否为完全二叉树
bool TreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
	{
		QueuePush(&q, root);
	}
	
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front == NULL)
		{
			break;
		}
		else
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front != NULL)
		{
			QueueDestroy(&q);
			return false;
		}
	}
	QueueDestroy(&q);
	return true;
}

void TreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	TreeDestory(root->left);
	TreeDestory(root->right);
	free(root);
}

int main()
{
	BTNode* n1 = BuyBTNode(1);
	BTNode* n2 = BuyBTNode(2);
	BTNode* n3 = BuyBTNode(3);
	BTNode* n4 = BuyBTNode(4);
	BTNode* n5 = BuyBTNode(5);
	BTNode* n6 = BuyBTNode(6);

	BTNode* n7 = BuyBTNode(7);
	n2->right = n7;

	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n4->left = n5;
	n4->right = n6;

	PrevOrder(n1);
	printf("\n");

	InOrder(n1);
	printf("\n");

	PostOrder(n1);
	printf("\n");

	size = 0;
	TreeSize1(n1);
	printf("TreeSize:%d\n", size);

	size = 0;
	TreeSize1(n1);
	printf("TreeSize:%d\n", size);

	size = 0;
	TreeSize1(n1);
	printf("TreeSize:%d\n", size);

	printf("TreeSize:%d\n", TreeSize2(n1));
	printf("TreeSize:%d\n", TreeSize2(n1));
	printf("TreeSize:%d\n", TreeSize2(n1));

	printf("TreeLeafSize:%d\n", TreeLeafSize(n1));
	printf("TreeHeight:%d\n", TreeHeight(n1));
	printf("TreeKLevelSize:%d\n", TreeKLevelSize(n1, 3));
	printf("TreeKLevelSize:%d\n", TreeKLevelSize(n1, 4));

	printf("TreeFind:%p\n", TreeFind(n1, 7));

	LevelOrder(n1);
	printf("TreeComplete:%d\n", TreeComplete(n1));

	TreeDestory(n1);
	n1 = NULL;

	return 0;
}