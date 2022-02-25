class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int current){
        if(sc<0 || sr<0 || sc>=image[0].size() || sr>=image.size() || image[sr][sc]!=current)return;
            image[sr][sc]=newColor;
            dfs(image,sr+1,sc,newColor,current);
            dfs(image,sr-1,sc,newColor,current);
            dfs(image,sr,sc+1,newColor,current);
            dfs(image,sr,sc-1,newColor,current);        
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       if(image[sr][sc]!=newColor){
        dfs(image,sr,sc,newColor,image[sr][sc]);
       }
        return image;
    }
};

