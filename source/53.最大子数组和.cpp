/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (i > 0)//因为数组中第一个元素直接赋值了，就不用加
                ans += nums[i];
            if (ans < nums[i])//相加所得小于当前元素大小
            {
                ans = nums[i];//更新相加序列位置
            }
            if (ans > max)//更新最大值
                max = ans;
        }
        return max;
    }
};
// @lc code=end
