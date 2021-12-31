class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp;
     
        stack<char> st;
        mp['(']=')';
        mp['[']=']';
        mp['{']='}';
        if(s.size()==0)return true;
       
        st.push(s[0]);
       // st.push_back(s[0]);
       for(int i=1;i<s.size();i++){
           if(s[i]=='}' || s[i]==')' || s[i]==']'){
               if(st.size()==0) return false;
               if(mp[st.top()]==s[i]) st.pop();
               else return false;
           }
           else st.push(s[i]);
           
       }
        if(st.size()==0)return true;
        return false;
    }
};