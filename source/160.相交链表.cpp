/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr||headB==nullptr){
            return nullptr;
        }
        ListNode *pa=headA,*pb=headB;
        while(pa!=pb){
           
            if(pa==nullptr){
                pa=headB;
            }else{
                pa=pa->next;
            }
            if(pb==nullptr){
                pb=headA;
            }else{
                pb=pb->next;
            }
            // pa=pa->next;
            // pb=pb->next;
        }
        return pa;
    }
};
// @lc code=end

