/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
   string addBinary(string a, string b)
    {
        int i, j;
        string ans;
        int flag = 0;//进位标志
        i = a.length() - 1;
        j = b.length() - 1;
        while( i >= 0&& j >= 0 )
        {
            if (a[i] == b[j] && a[i] == '0' && flag == 0)//同为0，且无进位
            {
                ans.push_back('0');//直接填0
            }
            else if (a[i] == b[j] && a[i] == '1' && flag == 0)//同为1，且无进位
            {
                ans.push_back('0');//填0
                flag = 1;//须进位
            }
            else if (a[i] != b[j] && flag == 0)//不相同，则必一个0一个1
            {
                ans.push_back('1');//无进位则直接填1
            }
            else if (a[i] == b[j] && a[i] == '0' && flag == 1)
            {
                ans.push_back('1');
                flag = 0;
            }
            else if (a[i] == b[j] && a[i] == '1' && flag == 1)
            {
                ans.push_back('1');
            }
            else if (a[i] != b[j] && flag == 1)
            {
                ans.push_back('0');
                flag = 1;
            }
            i--; 
            j--;
        }
        while (j >= 0)
        {
            if (flag == 1 && b[j] == '0')
            {
                ans.push_back('1');
                flag = 0;
            }
            else if (flag == 1 && b[j] == '1')
            {
                ans.push_back('0');
                flag = 1;
            }else if (flag == 0 && b[j] == '1')
            {
                ans.push_back('1');
            }else if (flag == 0 && b[j] == '0')
            {
                ans.push_back('0');
            }
            j--;
        }
        while (i >= 0)
        {
            if (flag == 1 && a[i] == '0')
            {
                ans.push_back('1');
                flag = 0;
            }
            else if (flag == 1 && a[i] == '1')
            {
                ans.push_back('0');
                flag = 1;
            }else if (flag == 0 && a[i] == '1')
            {
                ans.push_back('1');
            }else if (flag == 0 && a[i] == '0')
            {
                ans.push_back('0');
            }
            i--;
        }
        if (flag == 1)
        {
            ans.push_back('1');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
