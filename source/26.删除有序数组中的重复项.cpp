/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=1; i<nums.size();){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }else{
                i++;
            }

        }
        return nums.size();
    }
    
};
// @lc code=end

