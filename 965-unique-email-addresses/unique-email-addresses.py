class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        s=[]
        for i in emails:
            a,b=i.split("@")
            ss=""
            for k in a:
                if k=='+':
                    break
                elif (k=='.'):
                    continue
                ss=ss+k
            sb=ss+'@'+b
            s.append(sb)
        
        return len(set(s))
                

