#define _CRT_SECURE_NO_WARNINGS 1

//单值二叉树（接口型）
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    if (root->left && root->val != root->left->val)
//    {
//        return false;
//    }
//    if (root->right && root->val != root->right->val)
//    {
//        return false;
//    }
//    return isUnivalTree(root->left) && isUnivalTree(root->right);
//}


//二叉树最大深度（接口型）
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//    int left = maxDepth(root->left);
//    int right = maxDepth(root->right);
//    return left > right ? left + 1 : right + 1;
//}



//检查两颗树是否相同（接口型）
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