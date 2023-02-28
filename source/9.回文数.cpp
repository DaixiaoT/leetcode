/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
#include <iostream>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long b = 0;
        long long a = x;
        while (a > 0)
        {
            b += a % 10;

            a /= 10;
            if (a > 0)
            {
                b *= 10;
            }
        }
        // cout << x << endl;
        // cout << b;
        if (x == b)
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
