/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution
{
public:
    bool isHappy(int n)
    {
        int k;
        int ans;
        int flag = 0;
        while (ans != 1)
        {
            ans = 0;
            while (n > 0)
            {
                k = n % 10;
                ans += k * k;
                n = n / 10;
            }
            n = ans;
            flag++;
            if (flag > 10)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
