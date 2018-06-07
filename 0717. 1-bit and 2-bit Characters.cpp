//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80614781

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        for(int i=0;i<n;++i){
            if(bits[i]==1){
                ++i;
                if(i==n-1) return false;
            } 
        }
        return true;
    }
};
