class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            auto &last=res.back();
            if(intervals[i][0]==last[0]){
                last[1]=max(last[1],intervals[i][1]);
            }
            if(intervals[i][0]>=last[0] && intervals[i][1]<=last[1]  ){
                last[0]=min(last[0],intervals[i][0]);
                last[1]=max(last[1],intervals[i][1]);

            }
            else{
                res.push_back(intervals[i]);
            }
        }
        return res.size();
        
    }
};