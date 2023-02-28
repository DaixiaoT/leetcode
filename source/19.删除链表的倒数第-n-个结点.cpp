/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *pre = head;
        ListNode *later = head;
        if (later->next != nullptr)
        {

            for (int i = 0; i < n; i++)
            {
                if (later->next != nullptr)
                {
                    later = later->next;
                }
                else
                {
                    break;
                }
            }
            while (later->next != nullptr)
            {
                pre = pre->next;
                later = later->next;
            }
            cout << pre->val;
            if (pre->val == head->val)
            {
                cout << "aaa";
                if (n == 2)
                {
                    // head = head->next;
                    pre->next = pre->next->next;
                }
                else if (n == 1)
                {
                    head->next = nullptr;
                }
            }
            else
            {
                pre->next = pre->next->next;
            }
        }
        else
        {
            head = nullptr;
        }
        return head;
    }
};
// @lc code=end
