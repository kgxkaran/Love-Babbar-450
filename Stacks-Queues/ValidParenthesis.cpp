Approach 1:-

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(char it : s){
            if(it == '(' || it == '{' || it == '['){
                st.push(it);
            }else{
                if(st.empty())return false;
                char ch = st.top();
                st.pop();
                if( (it == ')' && ch == '(') || (it == '}' && ch == '{') || (it == ']' && ch == '[') )continue;
                else return false;
            }
        }
        return st.empty();
        
    }
};


Approach 2 :- 

    class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(char &ch : s){
            if(ch == '('){
                st.push(')');
            }else if(ch == '{'){
                st.push('}');
            }else if(ch == '['){
                st.push(']');
            }else if(st.empty() || st.top()!=ch){
                return false;
            }else{
                st.pop();
            }

        }
        return st.empty();
    }
};
