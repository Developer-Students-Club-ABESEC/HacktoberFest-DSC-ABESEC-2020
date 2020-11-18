def berth_type(s):  
       
    if s>0 and s<73: 
        if s % 8 == 1 or s % 8 == 4: 
            print (s, "is lower berth")
        elif s % 8 == 2 or s % 8 == 5: 
            print (s, "is middle berth")
        elif s % 8 == 3 or s % 8 == 6: 
            print (s, "is upper berth")
        elif s % 8 == 7: 
            print (s, "is side lower berth")
        else:  
            print (s, "is side upper berth")
    else: 
        print (s, "invalid seat number")
  
s = input("Enter the Seat number")
berth_type(int(s))
