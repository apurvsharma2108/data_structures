def findLongestConseqSubseq(self,a, N):
        
        n=set()
        for i in a:
            n.add(i)
        ans=0
        for i in range(len(n)):
            j=1
            #if current element is starting element of a sequence then only 
            #we try to find out the length of sequence. 
            if a[i]-1 not in n:
            #then we keep checking whether the next consecutive elements
            #are present in Set and we keep incrementing the counter.
                while(a[i]+j in n):
                    j+=1
                ans=max(ans,j)
        return ans
                