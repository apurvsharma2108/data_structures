a=18
a=bin(a)
print(a)
a=list(a)
a.remove('0')
a.remove('b')
a.sort()
print(a)