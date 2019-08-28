def main():
     usrInt = input("Please enter an integer: ")
     i = 1
     product = 1
     while i <= int(usrInt):
          product *= i
          i += 1

     print(product)


if __name__ == "__main__":
     main()