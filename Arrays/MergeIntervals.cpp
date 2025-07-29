class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n = intervals.size();
        if(n == 0) return ans;
        sort(intervals.begin() , intervals.end());
        int i = 1;
        int j = 0;

        while(i < n){
            if(intervals[j][1] >= intervals[i][0]){
                intervals[j][1] = max(intervals[j][1],intervals[i][1]);
                i++;
            }else{
                ans.push_back(intervals[j]);
                j = i;
                i++;
            }
        }
        ans.push_back(intervals[j]);
        return ans;
    }
};
