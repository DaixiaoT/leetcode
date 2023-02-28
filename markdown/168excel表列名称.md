# excel表列名称

数字转字母

```cpp
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
```



字母转数字

```cpp
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
```

