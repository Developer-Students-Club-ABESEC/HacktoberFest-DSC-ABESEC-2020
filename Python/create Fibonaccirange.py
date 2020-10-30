# Program to display the Fibonacci sequence up to n-th term
t = int(input("Please Enter Number of terms to display fibonacci range?? "))

# first two terms
a, b = 0, 1
count = 0
if t <= 0:
   print("Please enter a positive number")
elif t == 1:
   print("Fibonacci sequence upto",t,":")
   print(a)
else:
   print("Fibonacci sequence:")
   while count < t:
       print(a)
       n = a + b
       # update values
       a = b
       b = n
       count += 1
