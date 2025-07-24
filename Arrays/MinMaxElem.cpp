
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        
        pair<int,int>ans;
        
        int maxi = arr[0];
        int mini = arr[0];
        
        for(int i = 0; i < arr.size(); i++){
            maxi = max(maxi , arr[i]);
            mini = min(mini , arr[i]);
        }
        ans.first = mini;
        ans.second = maxi;
        
        return ans;
    }
};
