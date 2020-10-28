n = int(input("Enter the number: "))
copy=n
c=0
while(n>0):
    b=n%10
    c=(c*10)+b
    n=n//10
if(copy==c):
    print(c," is Palindrome")
else:
    print(c," is Not Palindrome")
