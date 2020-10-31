import datetime  
import calendar 
   
def day_occur_time(year): 
      
    days = [ "Monday", "Tuesday", "Wednesday",   
           "Thursday",  "Friday", "Saturday",  
           "Sunday" ] 
      

    L = [52 for i in range(7)] 
      

    pos = -1
    day = datetime.datetime(year, month = 1, day = 1).strftime("%A") 
    for i in range(7): 
        if day == days[i]: 
            pos = i 

    if calendar.isleap(year): 
        L[pos] += 1
        L[(pos+1)%7] += 1
          
    else: 
        L[pos] += 1
          

    for i in range(7): 
        print(days[i], L[i]) 
       

year = int(input("Please enter Year(like 1999, 2001 etc)"))
day_occur_time(year) 
