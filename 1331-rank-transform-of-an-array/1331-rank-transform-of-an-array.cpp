class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp;
        if(arr.size()<1)return temp;
        map<int,int> mp;
        for(auto x:arr)temp.push_back(x);
        sort(arr.begin(),arr.end());
        mp[arr[0]]=1;
            int k=2;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1])mp[arr[i]]=mp[arr[i-1]];
            else {
                mp[arr[i]]=k;
                k++;}       
        }
        
        for(int i=0;i<temp.size();i++){
            temp[i]=mp[temp[i]];
        }
        return temp;
    }
};