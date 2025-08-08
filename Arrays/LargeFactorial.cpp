correct Approach but 
❌ Problem: Overflow
You're using a long long (64-bit) to store the factorial, but factorials grow super fast:

20! = 2.43 × 10^18 ✅ (fits in long long)

21! = 5.1 × 10^19 ❌ (overflows)

100! has 158 digits 😱



// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
         long long ans = 1;
         for(int i = n; i >= 1; i--){
             ans = ans*i;
         }
         vector<int>store;
         long long temp = ans;
         while(temp!=0){
            int digit = temp%10;
            store.push_back(digit);
            temp = temp/10;
         }
         reverse(store.begin(),store.end());
         return store;
    }
};

Correct Solution :- 

  class Solution {
public:
    vector<int> factorial(int n) {
        vector<int> res;
        res.push_back(1); // 0! = 1

        for (int i = 2; i <= n; i++) {
            int carry = 0;

            for (int j = 0; j < res.size(); j++) {
                int val = res[j] * i + carry;
                res[j] = val % 10;
                carry = val / 10;
            }

            while (carry) {
                res.push_back(carry % 10);
                carry /= 10;
            }
        }

        reverse(res.begin(), res.end()); // Most significant digit first
        return res;
    }
};
