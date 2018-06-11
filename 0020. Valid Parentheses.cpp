Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.
Example 1:
Input: "()"
Output: true
Example 2:
Input: "()[]{}"
Output: true
Example 3:
Input: "(]"
Output: false
Example 4:
Input: "([)]"
Output: false
Example 5:
Input: "{[]}"
Output: true


题意：给定一个括号序列，让你判断括号是否合法。合法的条件是：①所有括号要正确匹配，不能有叠加。②匹配括号的顺序要正确，不能这样“（[)]”。

思路：

1.使用栈进行匹配操作。每次碰到左括号，就进栈，碰到右括号如果栈为空或者栈顶不是对应的左括号返回false。最后如果栈为空，即所有括号正确匹配，返回true。
参考代码：
[cpp] view plain copy


 
class Solution {  
public:  
    bool isValid(string s) {  
        stack<char> st;  
        int n=s.size();  
        for(int i=0;i<n;++i)  
        {  
            if(s[i]=='('||s[i]=='['||s[i]=='{')  
            {     
                st.push(s[i]);  
            }else if(s[i]==')')  
            {  
                if(st.empty()||st.top()!='(') return false;  
                st.pop();  
            }else if(s[i]==']')  
            {  
                if(st.empty()||st.top()!='[') return false;  
                st.pop();  
            }else if(s[i]=='}')  
            {  
                if(st.empty()||st.top()!='{') return false;  
                st.pop();  
            }  
        }  
        if(st.size()!=0) return false;  
        return true;  
    }  
};  
