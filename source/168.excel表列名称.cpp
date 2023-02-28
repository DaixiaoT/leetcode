/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */
//2147483647
// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans;
        int temp=columnNumber;
        int remain;
        remain = temp%26;
        if(remain==0){
            while(temp>=26){
                ans.append(1,'Z');
                temp=temp/26; 
            }
            if(temp>1){
               ans.append(1,str[temp-1]); 
            }
        }else{
            while(temp>26){
                remain=temp%26;
                ans.append(1,str[remain]);
                temp=temp/26;
            }
            ans.append(1,str[temp]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

