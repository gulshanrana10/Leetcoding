class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int borrow=1;
        int temp=digits[digits.size()-1]+1;
        for(int i=digits.size()-1;i>=0;i--){
           temp=digits[i]+borrow;
            digits[i]=temp%10;
            borrow=temp/10;
       
        }
        if(borrow!=0){
            reverse(digits.begin(),digits.end());
            digits.push_back(borrow);
            reverse(digits.begin(),digits.end());
        }
        return digits;
    }
};