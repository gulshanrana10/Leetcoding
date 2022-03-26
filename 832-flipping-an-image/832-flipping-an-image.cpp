class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        if(image[0].size()%2==0){
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size()/2;j++){
                int temp=image[i][j];
                image[i][j]=1-image[i][image[0].size()-1-j];
                image[i][image[0].size()-1-j]=1-temp;
            }
        }}
        else{
             for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size()/2+1;j++){
                int temp=image[i][j];
                image[i][j]=1-image[i][image[0].size()-1-j];
                image[i][image[0].size()-1-j]=1-temp;
            }
        }
        }
        
        return image;
    }
};