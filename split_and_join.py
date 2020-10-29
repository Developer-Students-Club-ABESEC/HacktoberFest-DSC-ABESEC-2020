def split(string): 
  
    string1 = string.split(' ') 
      
    return string1 
  
def join(string1): 
   
    string2 = '_'.join(string1) 
      
    return string2 
   
if __name__ == '__main__': 
    string = 'Joe Biden and Donald Trump are candidates of the presendential election in USA.'
       
    string1= split(string) 
    print(string1) 
   
    newstring = join(string1) 
    print(newstring) 
