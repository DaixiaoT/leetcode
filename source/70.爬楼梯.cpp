/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution
{
public:
    int flag[50]={0};
    int climbStairs(int n)
    {
        int a=1,b=1,c=1;
        
        for(int i=1;i<n;i++){
            a=b;
            b=c;
            c=a+b;
        }
        return c;
    }
};
// @lc code=end
// 1 2 3 5 8 13 21
