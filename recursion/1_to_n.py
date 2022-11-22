def solve(n):
    if n<1:
        return 
    else:
        solve(n-1)
        print(n,end=" ")

print(solve(10))
# A Python 3 program to
# demonstrate working of
# recursion


def printFun(test):

	if (test < 1):
		return
	else:

		
		printFun(test-1) # statement 2
		print(test, end=" ")
		return

# Driver Code
test = 3
printFun(test)


