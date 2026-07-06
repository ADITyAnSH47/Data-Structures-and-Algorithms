class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int end=nums.size()-1;
        int st=0;
        vector <int> ans=nums;
        sort(nums.begin(),nums.end());
        vector <int> val;

        while(st<end){
            if(nums[st]+nums[end]==target){
                val.push_back(nums[st]);
                val.push_back(nums[end]);
                break;  
                }
             if(nums[st]+nums[end]<target){
                st++;
            }else{
                end--;
            }     
            
        }
     int first = -1, second = -1;

for(int i = 0; i < ans.size(); i++) {
    if(ans[i] == val[0] && first == -1)
        first = i;
    else if(ans[i] == val[1] && second == -1)
        second = i;
}

return {first, second};
       
    }
};