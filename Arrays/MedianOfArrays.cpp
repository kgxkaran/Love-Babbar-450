Q1) Median of an Array (From sheet)

class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int low = 0;
        int high = arr.size()-1;
        int mid = low + (high-low)/2;
        if(arr.size() % 2 == 0){
            double ans = (arr[mid] + arr[mid+1])/2.0;
            return ans;
        }
        double ans = arr[mid];
        return ans;
    }
};
 

Q2) Median of 2 sorted arrays with EQUAL SIZES (Actual question)
https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-same-size/1

Naive Approach :- 

  class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        vector<int>store;
        for(int i = 0; i < a.size(); i++){
            store.push_back(a[i]);
        }
        for(int i = 0; i < b.size(); i++){
            store.push_back(b[i]);
        }
        sort(store.begin() , store.end());
        int low = 0;
        int high = store.size()-1;
        int mid = low+(high-low)/2;
        
        double ans = (store[mid] + store[mid+1])/2.0;
        
        return ans;
    }
};

