//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80484285
//TC O(N)

class Solution {  
public:  
    vector<int> plusOne(vector<int>& digits) {  
        for(int i=digits.size()-1;i>=0;--i)  
        {  
            if(digits[i]==9){  
                digits[i]=0;  
            }else{  
                digits[i]++;  
                return digits;  
            }  
        }  
        digits[0]=1;  
        digits.push_back(0);  
    return digits;  
    }  
}; 
