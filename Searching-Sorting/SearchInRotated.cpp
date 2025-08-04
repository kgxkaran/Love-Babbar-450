Approach 1 :- 

  Step-by-step:
Finding pivot (rotation point)
Loop runs at most n - 1 times → O(n)

Binary Search on 1 or 2 subarrays
Each binary search → O(log n)
So worst case: two binary searches → 2 * O(log n) → still O(log n)

✅ Overall Time Complexity:
O(n)

  

   class Solution {
private:
    int binarySearch(vector<int>& arr, int high , int low , int x){
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == x){
                return mid;
            }else if(arr[mid] > x){
                high = mid-1;
            }else{
                low = mid+1;
            }   
        }
        return -1;
    }  
public:
    int search(vector<int>& nums, int target) {
        int index = -1;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                index = i;
                break;
            }
        }
        if(index == -1){
            return binarySearch(nums, nums.size() - 1, 0, target);
        }
        int high1 = index;
        int low1 = 0;
        int high2 = nums.size()-1;
        int low2 = index+1;
        int left = binarySearch(nums,high1,low1,target);
        int right = binarySearch(nums,high2,low2,target);

        if(left == -1) return right;
        return left;
    }
};

Approach 2 :- Best Approach O(LogN)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;

            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] > target){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(nums[mid] < target && target <= nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};

  
