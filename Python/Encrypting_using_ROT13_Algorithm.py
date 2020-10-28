# Text Encryption program in Python
# A Text Encryption program is used to encode secret information in some sort of code which is non-recognizable.
# This program will help the user to generate a encrypted text based on the ROT13 Algorithm

# Developed by Irshan Akhtar - @cybernaut01 for HacktoberFest 2020

#Accepting input from the user.
unen_text = input("Please Enter the text to Encrypt : ")

#Defining a function of create the encrypted plain text from the text accepted by the user.
def rot13_encrypt(text):
    trans = unen_text.maketrans('ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz', 'NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm')
    enc_text = text.translate(trans)
    print("The encrypted text is : "+enc_text)

#Calling the function to print the Encrypted Value
rot13_encrypt(unen_text)

