Approach 1 :- But ans = ans + ch;  // costly if done many times
              Each time, a new string is created, and characters are copied over, causing time overhead.
              ✅ Fix: Use ans.push_back(st.top()) and then reverse the string.

  class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            if(ch == '*'){
                if(st.empty())continue;
                st.pop();
                continue;
            }
            st.push(s[i]);
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};
