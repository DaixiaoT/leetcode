/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it=nums.begin();
        while(it!=nums.end()){
            if(*it==val){
                nums.erase(it);
            }else{
                it++;
            }
        }
        return nums.size();

    }
};
// @lc code=end

