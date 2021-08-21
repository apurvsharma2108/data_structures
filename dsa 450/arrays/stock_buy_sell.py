def maxProfit(a):
        min_so_far=a[0] # we assume the minimum value of stock is a[0]
        max_profit=0    
        for i in range(0,len(a)):
            min_so_far=min(min_so_far,a[i]) # for each a[i] we take min of min so far and a[i]
            profit=a[i]-min_so_far #this is important      for eacj a[i]we check how much profit will it give from the minimum so far
            max_profit=max(profit,max_profit)
            
        return max_profit


a=[7,1,5,3,6,4]
print(maxProfit(a))