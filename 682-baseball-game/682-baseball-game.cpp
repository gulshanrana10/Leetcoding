class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> vec;
        for(int i=0;i<ops.size();i++){
            int l=vec.size();
            if(ops[i]=="+"){
                vec.push_back(vec[l-1]+vec[l-2]);            }
            else if(ops[i]=="D")vec.push_back(vec[l-1]*2);
            else if(ops[i]=="C")vec.pop_back();
            else vec.push_back(stoi(ops[i]));
        }
        return accumulate(vec.begin(),vec.end(),0);
    }
};