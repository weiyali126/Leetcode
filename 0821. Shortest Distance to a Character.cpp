//题目与思路参考我的博文：https://blog.csdn.net/vir_lee/article/details/80472341
//常规解法Time Complexity O（N^2)
class Solution {  
public:  
    bool ht[10010]={false};  
    vector<int> shortestToChar(string S, char C) {  
        vector<int> ans(S.size(),S.size());  
        for(int i=0;i<S.size();i++){  
            if(S[i]==C) ans[i]=0;  
            else{  
                int l=i,r=i;  
                while(l>=0&&S[l]!=C) l--;  
                while(r<S.size()&&S[r]!=C) r++;  
                if(l>=0&&S[l]==C&&r<S.size()&&S[r]==C) ans[i]=min(i-l,r-i);  
                else if(l>=0&&S[l]==C) ans[i]=i-l;  
                else if(r<S.size()&&S[r]==C) ans[i]=r-i;  
            }  
        }  
        return ans;  
    }  
};  


//优化解法，Time Complexity O（N）
class Solution {
public:
    bool ht[10010]={false};
    vector<int> shortestToChar(string S, char C) {
        int n=S.size();
        vector<int> ans(n,n);
        for(int i=0;i<n;i++)   if(S[i]==C) ans[i]=0;
        for(int i=1;i<n;i++) ans[i]=min(ans[i],ans[i-1]+1);
        for(int i=n-2;i>=0;--i) ans[i]=min(ans[i],ans[i+1]+1);
        return ans;
    }
};
