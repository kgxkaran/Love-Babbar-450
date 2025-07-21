class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size() - 1;
        
        while(i <= j){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }    
};


=> Other Similar Leetcode questions :- 

https://leetcode.com/problems/reverse-string/description/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            swap(s[left] , s[right]);
            left++;
            right--;
        }
        
    }
};

https://leetcode.com/problems/reverse-string-ii/description/

class Solution {
public:
    string reverseStr(string s, int k){
        for(int i = 0; i < (int)s.size() - 1; i = i + 2*k){
            int left = i;
            int right = min(i + k - 1 , (int)s.size() - 1);
            while(left < right){
                swap(s[left++],s[right--]);
            }
        }
        return s;
    }
};

https://leetcode.com/problems/reverse-vowels-of-a-string/description/

class Solution {
public:
    bool isVowel(char ch){
       return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    string reverseVowels(string s) {
        int left = 0;
        int right = (int)s.size() - 1;

        while(left < right){
            while(left < right && !isVowel(s[left])) left++;
            while(left < right && !isVowel(s[right])) right--;
            if(left < right){
                swap(s[left++],s[right--]);
            }
        }
        return s;

        
    }
};
