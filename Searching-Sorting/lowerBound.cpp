Find the index of the first element in a sorted array that is greater than or equal to x.

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr,int key){
    int mini = -1;
    int low = 0;
    int high = arr.size()-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] >= key){
            mini = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return mini;
}
int main(){
    vector<int>arr = {1,1,2,2,3,3,3,5,6};
    int k = 4;
    int ans = lowerBound(arr,k);
    cout << ans;
}
