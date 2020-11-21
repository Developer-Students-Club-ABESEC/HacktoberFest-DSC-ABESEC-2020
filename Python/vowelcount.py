# Program to count the number of each vowels

# string of vowels
vowels = 'aeiou'

str = input("Enter string to find vowel in it?")

# make it suitable for caseless comparisions
str = str.casefold()

# make a dictionary with each vowel a key and value 0
count = {}.fromkeys(vowels,0)

# count the vowels
for char in str:
   if char in count:
       count[char] += 1

print(count)
