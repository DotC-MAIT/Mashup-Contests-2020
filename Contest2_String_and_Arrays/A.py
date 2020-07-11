x = input()
if x[1:].isupper() or len(x)==1:
    x = x.swapcase()
print(x)
