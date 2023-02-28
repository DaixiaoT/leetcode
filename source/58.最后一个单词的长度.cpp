/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag=0;
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(isalpha(s[i])){
                flag=1;
            }
            else{
                flag=0;
            }
            if(flag==1){
                ans++;
            }
            if(flag==0&&ans>0){
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

