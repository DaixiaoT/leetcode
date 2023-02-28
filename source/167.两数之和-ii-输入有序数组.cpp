/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int i;
        int j;//定义相邻的两个指针
        for(i=0;i<numbers.size();){
            for(j=i+1;j<numbers.size();){
                if(numbers[i]+numbers[j]==target){//符合题目条件时，直接返回答案
                    v.push_back(i+1);
                    v.push_back(j+1);
                    return v;
                }else if(numbers[i]==numbers[j]){//不符合条件但是两个元素相等时，不必再浪费时间，直接后移
                    i++;
                    j++;
                }
                else{//保证后指针能正常循环
                    j++;
                }
            }
            i++;
        }
        return v;
    }
};
// @lc code=end

