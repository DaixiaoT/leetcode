/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        return test(s,t)&&test(t,s);
    }
    bool test(string s, string t)
    {
        map<char, char> m;
        for (char chs : s)
        {
            m[chs] = '0';
        }
        if (s.length() != t.length())
        {
            return false;
        }
        for (int chs = 0; chs < s.length(); chs++)
        {
            for (int cht = 0; cht < s.length(); cht++)
            {
                if (m[s[chs]] == '0' || m[s[chs]] == t[chs])
                {
                    m[s[chs]] = t[chs];
                    break;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
