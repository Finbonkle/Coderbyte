
# Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order. 
# For example: if the input string is "Hello World and Coders" then your program should return the string sredoC
# dna dlroW olleH. 


def FirstReverse(str): 

    # code goes here
    length = len(str)

    # assign the chars to newString in reverse order
    newString = ''

    i = 0
    while i < length:
         newString = newString + str[len(str) - 1 - i]
         i += 1

    return newString
    


def main():
     usrStr = input("Please enter a string: ")
     print(FirstReverse(usrStr))


if __name__ == "__main__":
     main()