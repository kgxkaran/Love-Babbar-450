Q1) Given an array arr, rotate the array by one position in clockwise direction.

class Solution {
  public:
    void rotate(vector<int> &arr) {
        
        int n = arr.size();
        if(n == 0) return;
        
        int last = arr[n - 1];
        
        
        for(int i = n-1; i >= 1; i--){
            arr[i] = arr[i-1];
        }
        
        arr[0] = last;
    }
};

Q2) Given an array arr, rotate the array by K positions.

  Approach 1 :- 

  class Solution {
public:
    void reverse(vector<int>&nums, int start, int end){
        while(start < end){
            swap(nums[start++] , nums[end--]);
        }

    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k % n;
        reverse(nums , 0 , n - 1);
        reverse(nums, 0 , k - 1);
        reverse(nums, k , n - 1);
    }
}; 

Approach 2:-

  class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp(n);
        for(int i = 0; i < nums.size(); i++){
            temp[(i+k)%n] = nums[i];
        }
        nums = temp;
    }
}; 
