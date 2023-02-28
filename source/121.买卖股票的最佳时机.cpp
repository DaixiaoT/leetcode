/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min=prices[0];
        int maxprofit=0;;
        for(int i=1; i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            if(prices[i]-min>maxprofit){
                maxprofit=prices[i]-min;
            }
        }
        return maxprofit;
    }
};
// @lc code=end
