Given two binary strings, return their sum (also a binary string).
The input strings are both non-empty and contains only characters 1 or 0.
Example 1:
Input: a = "11", b = "1"
Output: "100"
Example 2:
Input: a = "1010", b = "1011"
Output: "10101"


题意：给定两个字符串表示两个二进制数，求和并返回其结果二进制数。

思路：

1.预处理，让串a表示较大的那个串，如果a比b短，交换。

2.从右往左处理两个字符串，逐位相加，注意进位carry。

3.最后如果a串有剩余累加进结果串中，最后再判断处理一次进位carry。
参考代码：
 
class Solution {  
public:  
    string addBinary(string a, string b) {  
        if(a.size()<b.size()) swap(a,b);  
        int m=a.size(),n=b.size(),carry=0,i=m-1,j=n-1;  
        string ans="";  
        while(i>=0&&j>=0){  
            int t=a[i--]-'0'+b[j--]-'0'+carry;  
            carry=t/2;  
            ans+=(t%2+'0');  
        }  
        while(i>=0) {  
            ans+=(a[i]-'0'+carry)%2+'0';  
            carry=(a[i--]-'0'+carry)/2;  
        }  
        if(carry) ans+=carry+'0';  
        reverse(ans.begin(),ans.end());  
        return ans;  
    }  
}; 
