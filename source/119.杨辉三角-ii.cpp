/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans(rowIndex+1);
        for(int i=0; i<rowIndex+1;i++ ){
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans[rowIndex];

    }
};
// @lc code=end

