class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>st;
        string ans = "";
        for(char ch : S){
        st.push(ch);
         }
        while(!st.empty()){
           ans.push_back(st.top());
           st.pop();
        }
       return ans;

    }
};
