Approach 1 :- 
  
  O(n^2) Time and O(1) Space

  class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s == goal){
                return true;
                break;
            }
            char last = s.back();
            s.pop_back();
            s = last + s;
        }
        return false;
    }
};

Approach 2 :- 

  class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size()) return false;

        s = s + s;
        return s.find(goal) != string::npos;
    }
};
