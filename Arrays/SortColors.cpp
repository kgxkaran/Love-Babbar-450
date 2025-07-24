INTRODUCTION TO " COUNT SORT " AND " DUTCH NATIONAL FLAG ALGORITHM "

=> Approach 1 and 2 uses COUNT SORT (Brute and Better solutions)
=> Approach 3 uses DNF algo. (Most efficient)
  

  
Approach 1 :- 
  
  Time complexity : O(N)
  Space complexity : O(N)

  class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        vector<int>temp;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) count0++;
            if(nums[i] == 1) count1++;
            if(nums[i] == 2) count2++;
        }
        for(int i = 0; i < count0; i++){
            temp.push_back(0);
        }
        for(int i = 0; i < count1; i++){
            temp.push_back(1);
        }
        for(int i = 0; i < count2; i++){
            temp.push_back(2);
        }
        nums = temp;
    }
};

Approach 2 :-

   Time complexity : O(N)
  Space complexity : O(1)    //in-place


  class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) count0++;
            if(nums[i] == 1) count1++;
            if(nums[i] == 2) count2++;
        }
        for(int i = 0; i < count0; i++){
            nums[i] = 0;
        }
        for(int i = count0; i < count0 + count1; i++){
            nums[i] = 1;
        }
        for(int i = count0 + count1; i < count0+count1+count2; i++){
            nums[i] = 2;
        }
        
    }
};


Approach 3 :- 

  In-place, One-pass, O(N) time, O(1) space

 class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size() - 1;

        while(j <= k){
            if(nums[j] == 0){
                swap(nums[i++], nums[j++]);
            }
            else if(nums[j] == 1){
                j++;
            }
            else{
                swap(nums[j], nums[k--]);
            }
        }
    }
};
