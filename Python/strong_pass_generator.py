# Strong Password Generator in Python
# A strong password is the one which contains combination of signs, symbols, special characters, numbers and alphabets.
# This program will help the user to generate a strong password of the given length.

# Developed by Irshan Akhtar - @cybernaut01 for HacktoberFest 2020

import random
import array

#Accepting the maximum length of the password as required by the user.
length = input("Please Enter the length of the Password : ")

digits    = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
lowercase = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
uppercase = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
symbols = ['@', '#', '$', '%', '=', ':', '?', '.', '/', '|', '~', '>', '*', '(', ')', ]

#Creating a combined list of all characters.
combined_list = digits+lowercase+uppercase+symbols

#Now with the help of random library selecting at least one character from the above four lists.
rand_digit = random.choice(digits)
rand_lower = random.choice(lowercase)
rand_upper = random.choice(uppercase)
rand_symbol= random.choice(symbols)

#Now combining all the 4 characters to form the initial strong password.
temp_pass = rand_digit+rand_lower+rand_upper+rand_symbol

#Now after getting 4 characters from all the lists, we can add more characters to complete our password.
lt = int(length)
for i in range(lt-4):
    temp_pass = temp_pass + random.choice(combined_list)

    #Adding the temp_pass variable to an array named temp_pass_ar
    temp_pass_ar = array.array('u',temp_pass)
    #Shuffling the list so that the consistent pattern in the array is dissolved

    random.shuffle(temp_pass_ar)

#Now, Finally creating the password and displaying the output to the user.

password = ""
for pass_li in temp_pass_ar:
    password = password+pass_li

print("Password : "+password)
