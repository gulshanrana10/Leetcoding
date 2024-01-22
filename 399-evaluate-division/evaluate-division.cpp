class Solution {
public:
    vector<double> ans;
    void dfs(vector<pair<int,double>> arr[],int a,int b,double &tmp,map<int, bool> &visited,int l){
        if(a==b && ans.size()<l+1){            
            ans.push_back(tmp);
            return;
        }       
        visited[a]=true;
        for(auto c:arr[a]){
            int u=c.first;
            double w=c.second;
            if(!visited[u]){
            tmp=tmp*w;
            dfs(arr,u,b,tmp,visited,l);
            tmp=tmp/w;
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
      
          set<string> s;
        map<string,int> mp;
        map<string,int> check;
        int n=0;
        for(auto c:equations){
          s.insert(c[0]);
          s.insert(c[1]);
        }										 
						 
        for(auto c:s){					   
            mp[c]=n;
            check[c]=1;
            n++;
        }
        vector<pair<int,double>> arr[n];
        for(int i=0;i<equations.size();i++){
            int a=mp[equations[i][0]],b=mp[equations[i][1]];
            double c=1.0/(1.0*values[i]);
            arr[a].push_back({b,values[i]});
            arr[b].push_back({a,c});
        }
      
      
        map<int, bool> visited;    
        double tmp=1;   
        double nc=-1;   
        for(auto c:queries){
          if(!check[c[0]] || !check[c[1]])ans.push_back(nc);
           else{    
               int l=ans.size(); 
               dfs(arr,mp[c[0]],mp[c[1]],tmp,visited,l);
               if(l==ans.size())ans.push_back(nc);
               visited.clear();
               tmp=1;
               
            } }
        
        return ans;
    }
};


