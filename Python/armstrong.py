n = input("Enter the number: ")
l=len(n)
s=0
temp=int(n)
while(temp>0):
    d = temp%10
    d=d**l
    s+=d
    temp=temp//10
if(int(n)==s):
    print(n," is a Armstrong Number")
else:
    print(n,"is Not a Armstrong Number")
