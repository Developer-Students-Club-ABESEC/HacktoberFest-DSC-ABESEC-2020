morse_dict = {'A': '.-', 'B': '-...','C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.', 'G': '--.', 'H': '....', 'I': '..', 'J': '.---', 'K': '-.-',
                  'L': '.-..', 'M': '--', 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R' : '.-.', 'S': '...', 'T': '-',
                   'U': '..-', 'V': '...-', 'W': '.--','X': '-..-', 'Y': '-.--', 'Z': '--..',
                   '1': '.----', '2': '..---', '3': '...--','4': '....-', '5': '.....', '6': '-....','7': '--...', '8': '---..', '9': '----.','0': '-----', ', ': '--..--', '.': '.-.-.-',
                   '?': '..--..', '/': '-..-.', '-': '-....-','(': '-.--.', ')': '-.--.-'}

#Defining the function to encrypt the given string as per the morse code from the given morse code dictionary

def encrypt(message):
    cipher = ''
    for letter in message:
        if letter != ' ':
            cipher += morse_dict[letter] + ' '
        else:
            cipher += ' '

    return cipher

#Defining the function to decrypt the morse code as per the morse code from the given morse code dictionary.


def decrypt(message):
   message += ' '

   decipher = ''
   citext = ''
   for letter in message:
      if (letter != ' '):
         i = 0
         citext += letter
      
      else:
         # if i = 1 that indicates a new character
         i += 1

         # if i = 2 that indicates a new word
         if i == 2:

            # adding space to separate words
            decipher += ' '
         else:
            # accessing the keys using their values (reverse of encryption)
            decipher += list(morse_dict.keys())[list(morse_dict.values()).index(citext)]  
            citext = ''
   return decipher

#Main function


def main():
    message = "HacktoberFest"
    code = encrypt(message.upper())
    print(code)

    message = ".... .- -.-. -.- - --- -... . .-. ..-. . ... -"
    code = decrypt(message)
    print(code)

if __name__ == '__main__':
    main()
