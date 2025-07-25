https://leetcode.com/problems/jump-game/description/
Approach :- Using Greedy algorithm;
(can also be solved by using DP)

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > maxIndex) return false;
            maxIndex = max(maxIndex,(i + nums[i]));
            
        }
        return true;
    }
};


