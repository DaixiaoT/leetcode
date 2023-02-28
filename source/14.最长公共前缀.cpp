/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string begin = strs.at(0);
        string ans="";
        int flag=1;
        for(int i=0; i<begin.length();i++){
            // ans.push_back(begin[i]);
            for(auto str:strs){
                if(str[i]!=begin[i]){
                    flag=0;
                    break;
                }
            }
            if(flag==0){
                break;
            }else{
                ans.push_back(begin[i]);
            }
        }
        // cout<<begin;

        return ans;
    }
};
// @lc code=end
