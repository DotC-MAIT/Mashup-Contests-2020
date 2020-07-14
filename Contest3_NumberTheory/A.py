# Python 2 Solution

n=input()
x=input()
i=5
j=1
k=int(n/i)
s=k
while k!=0:
    k=int(k/i)
    s+=k
print (x/100.0*s)*n
