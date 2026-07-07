class Solution {
public:
    long long sumAndMultiply(int n) {
         long long z=0;
         long long ans=1;
         long long temp=0;

        while(n>0){
           
            if(n%10!=0){
                z+=n%10;
                temp=temp+n%10*ans;
                ans*=10;
            }
        n/=10;
        }
        long long fin=z*temp;

        return fin;
    }
};