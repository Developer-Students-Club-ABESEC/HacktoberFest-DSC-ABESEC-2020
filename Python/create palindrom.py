#This program is being used to check  palindrome  or not.....
num=int(input("Enter numnber"))
sum = 0
temp=num
while num>0 :
  d=num%10
  sum=sum*10+d;
  num=num//10
if temp==sum:
   print(temp,"Number is palindrom")
else:
  print(temp,"Number is not palindrom")
