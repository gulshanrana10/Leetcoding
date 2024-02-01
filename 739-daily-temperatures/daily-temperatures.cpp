class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int> vec(temperatures.size(),0);
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
       q.push({temperatures[0],0});
       for(int i=1;i<temperatures.size();i++){
           q.push({temperatures[i],i});

       while(q.top().first < temperatures[i])
    {   
        int a=q.top().first;
        int j=q.top().second;
        vec[j]=i-j;
        q.pop();
    }
    }
    return vec;
    }
};


