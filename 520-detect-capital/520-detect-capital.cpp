class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag=0,f1=0;
        if(word.size()<=1)return true;
        
        if(word[0]<='Z')flag=1;
        if(word[1]<='Z')f1=1;

        if(flag==1){
            if(f1==1){
            for(int i=1;i<word.size();i++){
                if(word[i]>='a')return false;
            }
            return true;
        }
        if(f1==0){
             for(int i=1;i<word.size();i++){
                if(word[i]<='Z')return false;
            }
            return true;
        }
        }
        else{
             for(int i=0;i<word.size();i++){
                if(word[i]<='Z')return false;
            }
            return true;
        }
        return true;
    }
};
