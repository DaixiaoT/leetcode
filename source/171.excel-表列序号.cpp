/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel 表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
    string str;
	str="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    reverse(columnTitle.begin(),columnTitle.end());
    int p=0;
    int ans=0;
    for(char a:columnTitle){
        ans+=str.find(a)*pow(26,p);
        p++;
    }
    return ans;
    }
};
// @lc code=end

