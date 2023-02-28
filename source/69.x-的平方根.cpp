/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        long i;
        long start=0,end=x,mid=(start+end)/2;
        long ans;
        while(start<=end){
            mid=(start+end)/2;
            if(mid*mid<=x){
                ans=mid;
                start=mid+1; 
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};
// @lc code=end

