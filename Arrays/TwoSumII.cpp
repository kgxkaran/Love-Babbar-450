Approach 1 :-

  class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        int i = 0;
        int j = n-1;
        while(i < j){
            int diff = target - numbers[i];
            if(numbers[j] < diff){
                i++;
                continue;
            }else if(numbers[j] > diff){
                j--;
            }else{
                return {i+1,j+1};
            }
        }
        return {};
        
    }
};

Approach 2 :- 

  Binary Search but its with time complexity O(NlogN)
