n=int(input("Enter a number"))
x=n
r=0
while(n>0):
  d=n%10
  r=r*10+d
  n=n//10
if(x==r):
  print("It is a Pallindrome Number !!")
else:
  print("Not a Pallindrome Number!")
