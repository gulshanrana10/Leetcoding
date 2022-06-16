class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
     set<char> s1={'q','w','e','r','t','y','u','i','o','p'};
     set<char> s2={'a','s','d','f','g','h','j','k','l'};
     set<char> s3={'z','x','c','v','b','n','m'};
       
        for(int i=0;i<words.size();i++)  {
               char temp=tolower(words[i][0]); 
            bool flag=true;
            if(s1.find(temp)!=s1.end()){
               for(int j=1;j<words[i].size();j++){
         if(s1.find(tolower(words[i][j]))==s1.end())flag=false;                 
           
        } 
            }
            else  if(s2.find(temp)!=s2.end()){
               for(int j=1;j<words[i].size();j++){
         if(s2.find(tolower(words[i][j]))==s2.end())flag=false;                 
           
        } 
            }
            else{
                for(int j=1;j<words[i].size();j++){
         if(s3.find(tolower(words[i][j]))==s3.end())flag=false;                 
           
        } 
            }
            if(flag) ans.push_back(words[i]);
        
     }
        return ans;
    }
};