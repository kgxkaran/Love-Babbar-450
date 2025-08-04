Brute force :- 

  class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>ans;
        int first = -1;
        int last = -1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == x){
                if(first == -1)first = i;
                last = i;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};

Optimal approach :- 

  class Solution {
public:
    int firstOccurence(vector<int>& arr, int x){
        int low = 0;
        int high = arr.size()-1;
        int first = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] >= x){
                if(arr[mid] == x) first = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return first;
    }
    
    int lastOccurence(vector<int>& arr, int x){
        int low = 0;
        int high = arr.size()-1;
        int last = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == x){
                last = mid;
                low = mid + 1;
            }else if(arr[mid] > x){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return last;
    }
         
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>ans;
        
        int firstOccur = firstOccurence(arr , x);
        int lastOccur =  lastOccurence(arr , x);
        
        ans.push_back(firstOccur);
        ans.push_back(lastOccur);
        return ans;
    }
};
