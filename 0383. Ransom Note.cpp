Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false. 
Each letter in the magazine string can only be used once in your ransom note.
Note:
You may assume that both strings contain only lowercase letters.
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true


题意：给定一个赎金字符串和一份杂志字符串，让你在杂志串中拼出赎金字符串，其中每个元素只能使用一次。

思路：

1.使用unordered_map 统计ransom中出现的字母以及次数，再在杂志序列中对应减去，结束后如果map中有剩余的字母没有清理掉，则说明杂志中没有足够字符，返回false。

2.另外，有可能赎金串很短，因此引入cnt变量统计总字符数，当cnt在杂志串遍历过程中，已经减到0，提前结束，然会true。
参考代码：

class Solution {  
public:  
    bool canConstruct(string ransomNote, string magazine) {  
        unordered_map<char,int> ht;  
        int cnt=0;  
        for(int i=0;i<ransomNote.size();++i){  
            ht[ransomNote[i]]++;  
            cnt++;  
        }  
        for(int i=0;i<magazine.size()&&cnt;++i){  
            if(ht.find(magazine[i])==ht.end())  
                continue;  
            if(ht[magazine[i]]>0)  
            {  
                ht[magazine[i]]--;  
                cnt--;  
            }  
        }  
        for(auto it=ht.begin();it!=ht.end();it++){  
            if(it->second>0)  
                return false;  
        }  
        return true;  
    }  
};  
