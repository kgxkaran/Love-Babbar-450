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
   
