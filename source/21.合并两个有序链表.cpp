/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start

//  * Definition for singly-linked list.



//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *p = list1;
        ListNode *q = list2;
        ListNode *L= new ListNode(0);
        ListNode* cur=L;
        
        while (p && q)
        {
            if(q->val<=p->val){
                ListNode *r=q->next;
                cur->next=q;
                cur=q;
                q=r;
            }else{
                ListNode *r=p->next;
                cur->next=p;
                cur=p;
                p=r;
            }
            
            
        }
        if(p){
            cur->next=p;
        }else{
            cur->next=q;
        }
        
        return L->next;
    }
};
// @lc code=end
