/*
 * @lc app=leetcode.cn id=876 lang=cpp
 *
 * [876] 链表的中间结点
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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *end = head;
        ListNode *mid = head;
        while (end->next != nullptr)
        {
            mid = mid->next;
            end = end->next;
            if (end->next != nullptr)
            {
                end = end->next;
            }
        }
        return mid;
    }
};
// @lc code=end
