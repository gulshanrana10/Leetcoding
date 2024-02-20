class Solution:
    def reverse(self, x: int) -> int:
        flg=1
        if x<0: flg=-1
        x=abs(x)
        x=int(str(x)[::-1])
        if x>2**31: return(0);
        return(x*flg)
