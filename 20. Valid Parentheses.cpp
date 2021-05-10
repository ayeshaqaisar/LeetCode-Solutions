class Solution {
public:
    bool isValid(string s) {
        
        stack <int> st;
        int x=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
          st.push(s[i]);
        else {
          if(st.empty())
            return false;
          if(s[i] == ')' && st.top() != '(') 
            return false;
          if(s[i] == ']' && st.top() != '[')
            return false;
          if(s[i] == '}' && st.top() != '{')
            return false;
          st.pop();      
        }
        }
        if(st.empty()){return true;}
       else{
           return false;
       }
    }
};