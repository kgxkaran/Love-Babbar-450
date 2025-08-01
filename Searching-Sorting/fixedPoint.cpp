Q1)Given an array arr. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int>ans;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == i+1) ans.push_back(arr[i]);
        }
        return ans;
    }
};

Q2) Given a sorted array of (distinct integers), return the smallest such fixed point. If no fixed point exists, return -1.

   #include<bits/stdc++.h>
using namespace std;

int fixedPoint(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == mid) {
            ans = mid;     
            high = mid - 1; 
        }
        else if (arr[mid] < mid) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {-10, -5, 0, 3, 7};
    cout << fixedPoint(arr); 
}


  
