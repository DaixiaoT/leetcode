/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i, j, k;
        j = m - 1;
        k = n - 1;
        for (i = m + n - 1; i >= 0; i--)
        {
            if (j >= 0 && k >= 0)
            {
                if (nums1[j] >= nums2[k])
                {
                    nums1[i] = nums1[j];
                    j--;
                }
                else
                {
                    nums1[i] = nums2[k];
                    k--;
                }
            }else{
                break;
            }
        }
        while(k>=0){
            nums1[i--]=nums2[k--];
        }

    }
};
// @lc code=end
