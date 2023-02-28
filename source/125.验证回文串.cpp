/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);//先将字符串转换为小写字母
        int i=0;//定义两个变量，一个从前往后。
        int j=s.length()-1;//一个从后往前遍历。
        while(i<=j){//在两个变量相遇之前
            if(isalnum(s[i])){//是否为字母或数字，否则继续向前找
                if(isalnum(s[j])){
                    if(s[i]!=s[j]){//发现不同直接返回false
                        return false;
                    }else{//反之继续找不同
                        i++;
                        j--;
                    }
                }else{
                    j--;
                }
            }else{
                i++;
            }
        }
        return true;
    }
};
// @lc code=end

