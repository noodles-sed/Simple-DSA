x,y=map(int,input().split())
for k in range(min(x,y),0,-1):
    if x%k==0 and y%k==0:
        print(k)
        break
