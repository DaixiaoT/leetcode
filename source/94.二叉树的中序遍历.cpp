/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;//创建一个数组，保存遍历过程的结果
        stack<TreeNode*> s;//创建一个栈保存遍历过程的节点
        TreeNode* cur=root;//创建一个指向根节点的指针
        while(cur!=nullptr||!s.empty()){
            if(cur!=nullptr){//当前节点不为null
                s.push(cur);//压栈
                cur=cur->left;//指针移动到左节点
            }else{//当前指针为null
                cur=s.top();//栈顶元素弹出
                s.pop();
                v.push_back(cur->val);//弹出时记录值
                cur=cur->right;//指针移到右节点
            }
        }

        return v;
    }
};
// @lc code=end
