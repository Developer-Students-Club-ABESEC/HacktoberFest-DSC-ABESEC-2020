n=int(input("Enter the no. of teams "))
lis=[]
count=0
for i in range (n):
    s=input("Enter team name: ")
    lis.append(s)

for i in range(n):
    for j in range(i):
        print(lis[j]," VS ",lis[i])
        count+=1
print("Total no. of matches:",count)
