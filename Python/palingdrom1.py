#This is the program for checking wheather a number is palingdrom or not........
#for taking input from user
num=int(input("Enter number :"))
sum=0
temp=num
#loop condition
while num >0:
    digit=num%10
    sum=sum*10+digit
    num=num//10
   #condition checking for armstrong number is it or not
if temp==sum:
    print(temp,"number is palingdrom")
else:
    print(temp,"number is not palingdrom")
