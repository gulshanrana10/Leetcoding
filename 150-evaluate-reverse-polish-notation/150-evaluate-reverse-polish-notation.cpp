class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()<=2)return stoi(tokens[0]);
        float p=stoi(tokens[0]);
        float q=stoi(tokens[1]);
        vector<double> temp={p,q};
     
        for(int i=2;i<tokens.size();i++){
            
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
               
                int a=temp.back();
                temp.pop_back();
                int b=temp.back();
                temp.pop_back();
             
                if(tokens[i]=="+")temp.push_back(a+b);
                else if(tokens[i]=="-")temp.push_back(b-a);
                else if(tokens[i]=="*")temp.push_back(a*b);
                else if(tokens[i]=="/")temp.push_back(b/a);
            }
            else{
               temp.push_back(stoi(tokens[i]));
               
            }
        }
       for(auto x:temp)cout<<x<<endl;
        return temp.back();
    }
}; 
