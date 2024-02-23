class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        a=version1.split(".")
        b=version2.split(".")
        #print(a,'\n',b)
        l1=len(a)
        l2=len(b)
        for i in range(min(l1,l2)):
            if int(a[i])>int(b[i]):
                return(1)
            elif int(a[i])<int(b[i]):
                return(-1)
        
        l=min(l1,l2)
        if l==l2 and l!=l1:
            for i in range(l,l1):
                if int(a[i])>0: return(1)
            
        elif l==l1 and l!=l2:
            for i in range(l,l2):
                if int(b[i])>0: return(-1)
            
        return(0)