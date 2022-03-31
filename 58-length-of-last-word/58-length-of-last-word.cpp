class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int flag=0;
        for(int i=s.size()-1;i>=0;i--){
          if(flag==0){
              if(s[i]!=' ')flag=1;
          }
            
            if(flag==1){
            if(s[i]==' '){
                break;
            }
            else count++;
        }
        
        
        }
        return count;
    }
};