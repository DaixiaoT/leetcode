/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        
        digits[digits.size() - 1] += 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (i == 0 && digits[i] == 10)
            {
                digits.insert(digits.begin(), 0);
                digits[i + 1] = 0;
                digits[i] += 1;
            }
            else if (digits[i] == 10)
            {

                digits[i] = 0;
                digits[i - 1] += 1;
            }
            
        }
        return digits;
    }
};
// @lc code=end
