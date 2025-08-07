Approach 1 :- 

  class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int count = 0;
        for(int i = 0; i < n-1; i++){
           for(int j = i + 1; j < n; j++){
               if(arr[i] > arr[j]) count++;
           }
       }
       return count;
    }
};

Approach 2 :- 
 
  
