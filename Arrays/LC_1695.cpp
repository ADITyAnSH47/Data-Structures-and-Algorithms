class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int st=0;
        int end=0;
        int n=nums.size();
        int temp=0 ,ans=0;
        unordered_set<int>seen;
        while(end<n){
            if(!seen.count(nums[end])){
                seen.insert(nums[end]);
                temp+=nums[end++];
            }
            else{
            while(seen.count(nums[end])){
                seen.erase(nums[st]);
                temp-=nums[st++];
            }
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};