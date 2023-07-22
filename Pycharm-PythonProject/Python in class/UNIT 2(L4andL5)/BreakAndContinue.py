for num in range(1,10):
    if(num%5==0):
        print(num,"is divisible by 5")
        break
    else:
        print(num,"isn't divisible by 5")


'''#Take a character input from the user using input() function.
#Write a program to check the given input is a vowel or not. Print the result to the console as shown in the examples.
if the input is a digit other than 9, the program should print wrong input
if the input is 9, the program should exist'''
'''ch=str(input())
    if(ch=="a" or ch=="e" or ch=="i" or ch=="o" or ch=="u" or ch=="A" or ch=="E" or ch=="I" or ch=="O" or ch=="u"):
        print("It is a vowel number")
    else:
        print("It is not a vowel")'''

ch="aeiouAEIOU"
inp=(input("Enter a character:"))
if inp in ch:
    print("Vowel")
else:
    print("Not Vowel")
    if ("inp"!=9):
        print("Wrong input")
    else:
        exit()



                            #CONTINUE
#CHECKING IF THE ENTERED CHARACTER IS A VOWEL
'''vowels="aeiouAEIOU"
while True:
    char1=input("vowel,or 9 to quit:")
    if char1.isalpha() or char1=="9":
        if char1=="9":
            break

        if char1 in vowels:
                print("vowel")
        else:
            print("not vowel")
    else:
        print("wrong input")
        continue
        '''


#2.
for num in range(1,20,1):
        if(num<10):
            continue
        else:
            print("The number is",num)




