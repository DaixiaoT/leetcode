/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        map<char, int> m;
        m = {
            {'(', 1}, {'[', 3}, {'{', 5}, {')', 2}, {']', 4}, {'}', 6}};
        string ans;
        // cout<<m.at(')');
        for (auto c : s)
        {
            if (m.at(c) % 2 == 1)
            {
                ans.push_back(c);
            }
            else
            {
                if (ans.length() >= 1)
                {
                    if (m.at(c) == m.at(ans[ans.length() - 1]) + 1)
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        if (ans == "")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
