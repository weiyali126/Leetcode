The count-and-say sequence is the sequence of integers with the first five terms as following:
1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth term of the count-and-say sequence.
Note: Each term of the sequence of integers will be represented as a string.
Example 1:
Input: 1
Output: "1"

Example 2:
Input: 4
Output: "1211"



题意：给定一个整数要求你按照规定的规则输出其结果。规则如下：

    ①输入1，则直接输出1。

    ②输入2，对上一个数统计个数并读出，即1个1，输出11。

    ③输入3，对前一个数字统计个数并读出，即2个1，输出21。

    ④输入4，对前一个数字统计个数并读出，即1个2，1个1，输出1211。

    ⑤输入5，对前一个数字统计个数并读出，即1个1，1个2，2个1，输出111221.


    ⑥输入6，对前一个数字统计个数并读出，即3个1，2个2，一个1，输出312211
    如此下去。。。

思路：

1.对于给定的n，按规则从1开始逐次累加到n。
参考代码：
 
class Solution {  
public:  
    string countAndSay(int n) {  
        string ans="1",temp;  
        for(int k=1;k<n;++k){  
            temp=ans;  
            ans="";  
            int cnt=1;  
            for(int i=0;i<temp.size();++i){  
                if(i==temp.size()-1) {ans+=(cnt+'0');ans+=temp[i];}  
                else if(temp[i]==temp[i+1]){  
                    cnt++;  
                }else{  
                    ans+=(cnt+'0');ans+=temp[i];  
                    cnt=1;  
                }  
            }  
        }  
        return ans;  
    }  
};  
