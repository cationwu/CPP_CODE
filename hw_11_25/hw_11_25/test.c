#define _CRT_SECURE_NO_WARNINGS 1


//翻转二叉树（接口型）
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//struct TreeNode* invertTree(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return NULL;
//    }
//    struct TreeNode* tmp = root->left;
//    root->left = root->right;
//    root->right = tmp;
//    invertTree(root->left);
//    invertTree(root->right);
//    return root;
//}



//对称二叉树（接口型）
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//bool _isSymmetric(struct TreeNode* root1, struct TreeNode* root2)
//{
//    if (root1 == NULL && root2 == NULL)
//    {
//        return true;
//    }
//    if (root1 == NULL || root2 == NULL)
//    {
//        return false;
//    }
//    if (root1->val != root2->val)
//    {
//        return false;
//    }
//    return _isSymmetric(root1->left, root2->right) && _isSymmetric(root1->right, root2->left);
//}
//
//bool isSymmetric(struct TreeNode* root) {
//    return !root || _isSymmetric(root->left, root->right);
//}


//另一棵树的子树（接口型）
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//    //其中一个为空，另一个不为空
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//    if (p->val != q->val)
//    {
//        return false;
//    }
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//    if (root == NULL)
//    {
//        return false;
//    }
//    if (isSameTree(root, subRoot))
//    {
//        return true;
//    }
//    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//}


//已知前序遍历，求二叉树结构
#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    char val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* RebuildTree(char* str, int* pi)
{
    if (str[*pi] == '#')
    {
        (*pi)++;
        return NULL;
    }
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = str[(*pi)++];
    root->left = RebuildTree(str, pi);
    root->right = RebuildTree(str, pi);

    return root;
}

void InOrder(struct TreeNode* root)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    printf("%c ", root->val);
    InOrder(root->right);
}

int main() {
    char str[100] = { 0 };
    scanf("%s", str);

    int i = 0;
    struct TreeNode* root = RebuildTree(str, &i);
    InOrder(root);
    return 0;
}