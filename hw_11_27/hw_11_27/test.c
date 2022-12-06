#define _CRT_SECURE_NO_WARNINGS 1


//判断一颗二叉树是否是平衡二叉树（接口型）
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//int TreeHeight(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    int treeleft = TreeHeight(root->left) + 1;
//    int treeright = TreeHeight(root->right) + 1;
//
//    return treeleft > treeright ? treeleft : treeright;
//}
//
//bool isBalanced(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    int left = TreeHeight(root->left);
//    int right = TreeHeight(root->right);
//    if (left > right)
//    {
//        int tmp = right;
//        right = left;
//        left = tmp;
//    }
//    if (right - left <= 1)
//    {
//        return true && isBalanced(root->left) && isBalanced(root->right);
//    }
//    else
//    {
//        return false;
//    }
//}