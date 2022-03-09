class Solution {
public:
    vector<int> constructRectangle(int area) {
    vector<int> ans;
    
    for(int i=(int)pow(area,0.5);i<area+1;i++){
        if(i*(int)(area/i)==area){
            ans.push_back(max(i,area/i));
            ans.push_back(min(i,area/i));
            break;
        }
        
    }
        
        return ans;
    }
};