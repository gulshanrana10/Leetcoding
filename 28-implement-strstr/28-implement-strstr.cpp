class Solution {
public:
   
        int strStr(string haystack, string needle) {
        int m = haystack.size(), end = needle.size(), start = 0;
        while (start + end - 1 < m) {
            if (haystack.substr(start, end) == needle) {
                return start;
            }
            while (start++ + end - 1 < m && haystack[start] != needle[0]);
        }
        return -1;
    }
    
};