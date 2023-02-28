/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char,int > m;
        m = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        ans += m.at(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            // cout<<s[i-1]<<" "<<s[i]<<ans<<endl;
            ans += m.at(s[i]);

            if (m.at(s[i - 1]) < m.at(s[i]))
            {
                ans -= 2*m.at(s[i - 1]);
            }
        }
        // cout<<s;
        return ans;
    }
};
// @lc code=end
