Approach 1 :- 



class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        int ans;
        for(auto it : nums){
            mpp[it]++;
        }
        for(auto num : mpp){
            if(num.second >= 2){
                ans = num.first;
            }
        }
        return ans;
    }
};

Approach 2:- 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int ans;
       for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] == nums[i + 1]){
            ans = nums[i];
        }
       }
       return ans;
    }
};

Approach 3 :- Using hare and tortoise method

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int slow = nums[0];
       int fast = nums[0];

       slow = nums[slow];
       fast = nums[nums[fast]];

       while(slow != fast){
        slow = nums[slow];
        fast = nums[nums[fast]];
       }

       slow = nums[0];
       
       while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
       }

       return fast;

    }
};
