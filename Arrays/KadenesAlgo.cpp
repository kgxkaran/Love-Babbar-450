Wap to print all SubArrays :-

  #include<bits/stdc++.h>
  using namespace std;

vector<vector<int>>subArrays(vector<int> &arr){
    size_t n = arr.size();
    vector<vector<int>>ans;
    
    for(int i = 0; i < n; i++){
        vector<int>insert;
        for(int j = i; j < n; j++){
            insert.push_back(arr[j]);
            ans.push_back(insert);
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {2,3,4,5,6};
    vector<vector<int>>ans = subArrays(arr);
    
    
    for (auto& sub : ans) {
        for (int x : sub) cout << x << " ";
        cout << endl;
    }
}





Approach 1 :- 


  class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi = arr[0];
        size_t n  = arr.size(); 
        for(size_t i = 0; i < n; i++){
            int curr_sum = 0; 
            for(size_t j = i ; j < n; j++){
                curr_sum += arr[j];
                maxi = max(curr_sum,maxi);
            }
        }
        return maxi;
    }
};
