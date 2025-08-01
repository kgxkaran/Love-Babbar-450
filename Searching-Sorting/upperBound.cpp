Find the index of the first element strictly greater than x.

  
#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>&arr,int key){
    int mini = -1;
    int low = 0;
    int high = arr.size()-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] > key){
            mini = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return mini;
}
int main(){
    vector<int>arr = {4,5,5,5,5,5};
    int k = 4;
    int ans = upperBound(arr,k);
    cout << ans;
}
