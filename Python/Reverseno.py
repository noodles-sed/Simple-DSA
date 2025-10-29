x=int(input())
c=0
while (x>0):
    c=c*10+x%10
    x//=10
print(c)
