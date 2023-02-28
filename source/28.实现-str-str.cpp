/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        // if(needle.length()>haystack.length())return -1;
        
        for(int i=0;i<haystack.length();i++){
            int flag=1;
            for(int j=0; j<needle.length(); j++){
                if(haystack[i+j]!=needle[j]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

