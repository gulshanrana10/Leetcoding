class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans=0;
        vector<int> l2r(ratings.size(),1);
        vector<int> r2l(ratings.size(),1);
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1])l2r[i]=l2r[i-1]+1;
        }
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])r2l[i]=r2l[i+1]+1;
        }
        
        for(int i=0;i<ratings.size();i++){
         ans=ans+max(l2r[i],r2l[i]);
        }
        return ans;
    }
};