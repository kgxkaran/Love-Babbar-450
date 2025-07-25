Approach 1:- 

  Time Complexity: O(n) average case
  Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int>union(vector<int>&arr,vector<int>&arr2){
   unordered_set<int>s;
   vector<int>ans;
   
   for(auto num : arr){
       s.insert(num);
   }
   for(auto it : arr2){
       s.insert(it);
   }
   for(auto it : s){
       ans.push_back(it);
   }
   return ans;

Approach 2 :-

  If arrays are not sorted, you must sort them first 

 class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        int i = 0,j=0;
        vector<int>ans;
        
        while(i < n1 && j < n2){
            if(a[i] <= b[j]){
                if(ans.size() == 0 || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }
            else{
                if(ans.size() == 0 || ans.back() != b[j]){
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        while(i < n1){
            if(ans.size() == 0 || ans.back() != a[i]){
                    ans.push_back(a[i++]);
                }
        }
        while(j < n2){
             if(ans.size() == 0 || ans.back() != b[j]){
                    ans.push_back(b[j++]);
                }
        }
        return ans;
    }
};
   
