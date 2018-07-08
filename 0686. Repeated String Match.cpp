Given two strings A and B, find the minimum number of times A has to be repeated such that B is a substring of it. If no such solution, return -1.
For example, with A = "abcd" and B = "cdabcdab". 
Return 3, because by repeating A three times (“abcdabcdabcd”), B is a substring of it; and B is not a substring of A repeated two times ("abcdabcd").
Note:
The length of A and B will be between 1 and 10000.


题意：给定两个字符串A和B，问你字符串A至少重复多少次可以使串B是A的字串，如果始终找不到符合条件的次数，返回-1.

思路：

1.使用string.find()函数进行子串查找。

2.注意A串的重复次数初始为1.
参考代码：

class Solution {

public:

    int repeatedStringMatch(string A, string B) {

        int cnt=1;

        string s=A;

        while(s.size()<B.size())

        {

            s=s+A;

            ++cnt;

        }

        for(int i=0;i<2;++i){

            if(s.find(B)!=-1)

                return cnt;

            cnt++;

            s=s+A;

        }

        return -1;

    }

};
