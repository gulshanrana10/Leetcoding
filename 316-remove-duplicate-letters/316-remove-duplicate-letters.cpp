class Solution {
public:
    string removeDuplicateLetters(string s) {
       vector<int> lastindex(26,0);
            
        for(int i=0;i<s.size();i++){
            lastindex[s[i]-'a']=i;
        }
        
        vector<bool> visited(26,false);
        stack<char> ch;
        
        for(int i=0;i<s.size();i++){
            int curr=s[i]-'a';
            if(visited[curr])continue;
            while(ch.size()>0 && ch.top()>s[i] && i<lastindex[ch.top()-'a']  ){
                
                visited[ch.top()-'a']=false;
                ch.pop();
                
            }
            ch.push(s[i]);
	    visited[curr]=true;
        }
     
        string ans = "";
        while (ch.size() > 0){
            ans += ch.top();
            ch.pop();
        }
        reverse(ans.begin(),ans.end());
    
         
        return ans;
    }
};

