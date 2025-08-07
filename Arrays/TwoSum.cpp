Approach 1 :- Brute force

  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int>ans;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i+1; j < nums.size(); j++){
                int sum = nums[i] + nums[j];
                if(sum == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};

Approach 2 :-

  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int,int>mpp;

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(mpp.count(diff)){
                return{mpp[diff] , i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};

