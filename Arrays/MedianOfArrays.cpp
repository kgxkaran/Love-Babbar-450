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

