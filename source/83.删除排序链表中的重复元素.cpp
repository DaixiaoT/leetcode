/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *p = head;//新建一个指针指向第一个节点
        if (p == nullptr)//如果链表为空直接返回
        {
            return p;
        }
        ListNode *q = head->next;//再新建一个指针指向下一个节点，便于比较
        while (q != nullptr)
        {
            if (p->val == q->val)//如果值相等
            {
                p->next = q->next;//跳过下一个节点，连接下下个节点
                q = q->next;//两个指针同时后移
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        return head;
    }
};
// @lc code=end
