Approach 1:- 

  Time Complexity: O(n*log(n)), Where n is the length of the given array.
  Auxiliary Space: O(1)


  #include<bits/stdc++.h>
using namespace std;

vector<int>shiftAllNeg(vector<int>&arr){
    sort(arr.begin() , arr.end());
    return arr;
}
int main(){
    vector<int>nums = {3,4,-1,3,-1,-2,-2,-3,-3};
    vector<int>ans =  shiftAllNeg(nums);
    
    for(auto num : ans){
        cout << num << " ";
    }
}

Approach 2 :- 

  Time Complexity: O(n)
  Auxiliary Space: O(1)


  #include<bits/stdc++.h>
using namespace std;

vector<int>shiftAllNeg(vector<int>&arr){
    int j = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < 0){
            swap(arr[i] , arr[j]);
            j++;
        }
    }
    return arr;
}
int main(){
    vector<int>nums = {3,4,-1,3,-1,-2,-2,-3,-3};
    vector<int>ans =  shiftAllNeg(nums);
    
    for(auto num : ans){
        cout << num << " ";
    }
}

Approach 3 :- (2-Pointer approach)   but relative order is not preserved

   Time Complexity: O(n)
   Auxiliary Space: O(1)
  
   vector<int> shiftAllNeg(vector<int>& arr) {
    int left = 0; 
    int right = arr.size() - 1;

    while (left <= right) {
        
        if (arr[left] < 0 && arr[right] >= 0) {
            left++;
            right--;
        }
        else if (arr[left] >= 0 && arr[right] < 0) {
            swap(arr[left++], arr[right--]);
        }
        else if (arr[left] >= 0 && arr[right] >= 0) {
            right--;
        }
        else {
            left++;
        }
    }
    return arr;
}
