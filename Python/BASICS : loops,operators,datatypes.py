'''loops
operators
data types
'''
# welcome msg and order 
total = 0
print("Hi, Welcome to the sandwich shop.\n Please select ur sandwich")
sandwich_type = input(' "c" for Cheese or "v" for Veggie: ')
if sandwich_type.lower() == "c":
    print("please select ur cheese type: ")
    cheese_type = input(' "c" for Cheddar or "m" for Manchengo: ')
    if cheese_type.lower() == "c":
        print("here's ur cheddar cheese sandwich,Thankyou.")
        q = int(input('Enter the quantity: '))
        total += (30 * q)
    if cheese_type.lower() == "m":
        print("here's ur manchengo cheese sandwich,Thankyou.")
        r = int(input('Enter the quantity: '))
        total += (40 * r) 
    else:
        print("Sorry,we don't have",cheese_type,"choice today.")
if sandwich_type.lower() == "v":
    print("Here's ur veggie special.Thankyou.")
    s = int(input('Enter the quantity: '))
    total += (20 * s)
else:
    print("Sorry,we don't have",sandwich_type,"choice today.")


#payments
print("please submit the required amount: ")
print("20 bucks for veggie burger")
print("30 bucks for 'c' cheese burger")
print("40 bucks for 'm' cheese burger")

money_recieved = int(input("money recieved : "))

#money to be returned
if money_recieved < total:
    print(f"U need to pay {total} amount of money")
else:
    print("money left to u: " , money_recieved - total)
    
    
print("Goodbye! ")
