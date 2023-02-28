/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        s.insert(s.end(),' ');
        string ans=s;
        stack<char> stk;
        int j=0;
        for (auto i : s)
        {
            if (i != ' ')
            {
                stk.push(i);
            }
            else
            {
                
                while (!stk.empty())
                {
                    ans[j++] = stk.top();
                    stk.pop();
                }
                ans[j++]=' ';
            }
        }
        ans.erase(ans.length()-1,1);
        return ans;
    }
};
// @lc code=end
