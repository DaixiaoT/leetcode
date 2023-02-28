/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start=0;
        long end=n;
        long mid;
        while(start<=n){
            mid=(start+end)/2;
            if(!isBadVersion(mid)){
                start=mid+1;
            }else{
                if(!isBadVersion(mid-1)){
                    return mid;
                }else{
                    end=mid-1;
                }
            }
        }
        return 1;
    }
    

};
// @lc code=end

