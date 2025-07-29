/*Complete the function below*/

class Solution {
  private:
    bool checkPalindrome(int& a){
        int temp = a;
        int reverse = 0;
        while(temp != 0){
            int digit = temp%10;
            reverse = reverse*10 + digit;
            temp = temp/10;
        }
        
        return (reverse == a);
    }
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        size_t n = arr.size();
        for(size_t i = 0; i < n; i++){
            if(!checkPalindrome(arr[i])) return false;
        }
        return true;
        
    }
};
