// time complexity O(n)
class Solution {
public:
    int reverse(int x) {
        long long a=x;
        if(x<0){
            a=-a;
        }
        long long ans=0;
        while(a>0){
            ans=ans*10+a%10;
            a=a/10;
        }
        if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }
        else if(x<0){
            return -ans;
        }
        return ans;
    }
};