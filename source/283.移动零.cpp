/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=1;
        while(j<=nums.size()-1&&i<=nums.size()-1){//保证两个指针均在数组范围内
            if(nums[i]==0&&nums[j]!=0){//前等于0后不等于0，则交换
                nums[i]+=nums[j];
                nums[j]=nums[i]-nums[j];
                nums[i]=nums[i]-nums[j];
                i++;//前指针后移
            }else if(nums[j]==0&&nums[i]==0){//前后均等于0
                j++;//后指针后移，寻找是否存在不为0的元素
            }else if(nums[i]!=0&&nums[j]!=0){//前后均不等于0
                i++;
                j++;//两个指针同时后移
            }else{//前不等于0，后等于0
                i++;//前指针后移，继续寻找是否存在不等于0元素
            }
        }
       
    }
};
// @lc code=end

