Approach 1 :- 
  
  Time Complexity: O((m+n) log (m+n))
  Space: O(1) if using built-in sort (or O(m+n) if copying first)

  class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};



Approach 2 :- 

  Time Complexity: O(m + n)
  Space: O(m + n)

  class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        vector<int>ans;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m)ans.push_back(nums1[i++]);
        while(j < n)ans.push_back(nums2[j++]);

        nums1 = ans;
    }
};

Approach 2:- 

  
