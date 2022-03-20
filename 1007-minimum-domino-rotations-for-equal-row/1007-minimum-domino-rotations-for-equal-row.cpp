class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int fin=-1;
       int len=tops.size();
        for(int i=0;i<tops.size();i++){
            
           if(tops[i]==tops[0] || bottoms[i]==tops[0]){
               fin=tops[0];
           }
            else{
            fin=-1;
            break;}
        }
        
        int fin1=-1;
        for(int i=0;i<tops.size();i++){
            if(tops[i]==bottoms[0] || bottoms[i]==bottoms[0]){
               fin1=bottoms[0];}
            else{
                fin1=-1;
                break;
            }
        }
        
        if(fin==-1 && fin1==-1)return fin;
        int ans=0;
        int pass=INT_MAX,pass2=INT_MAX;
        if(fin!=-1 ){
            for(int i=0;i<tops.size();i++){
               if(tops[i]!=fin)ans++;
            }
        int ans2=0;
        for(int i=0;i<tops.size();i++){
               if(bottoms[i]!=fin)ans2++;
            }
         pass=min(ans,ans2);
        }
        int ans3=0,ans4=0;
       if(fin1!=-1 ){
            for(int i=0;i<tops.size();i++){
               if(tops[i]!=fin1)ans3++;
            }
        
        for(int i=0;i<tops.size();i++){
               if(bottoms[i]!=fin1)ans4++;
            }
         pass2=min(ans3,ans4);
        }
        
        return min(pass,pass2);
    }
};