//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80559372

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int N=flowerbed.size(),cnt=0;
        for(int i=0;i<N&&n;++i){
            if(!flowerbed[i]&&((i==0&&!flowerbed[i+1])||(!flowerbed[i-1]&&!flowerbed[i+1])||(i==N-1&&!flowerbed[i-1]))){
                --n;++i;
            }
        }
        return n==0;
    }
};
