#Python3 SOlution

l,r = list(map(int,input().split())) #input command

l += (l&1) #decided a shall be even
if r-l>1  :
    print (l,l+1,l+2)
else :
    print(-1)

#by shubh
