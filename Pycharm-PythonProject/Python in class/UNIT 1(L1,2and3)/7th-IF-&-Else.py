'''
if(condition):
    body of if
else:
    body of else
'''

#WAP to check you are eligible to vote or not?
'''
age = int(input("Enter you age:"))
if(age>=18):                            #-> we have to do == , && also in python
    print("You are eligible to vote")
    print("you are adult")
else:
    print("You aren't eligible to vote")
    print("You are child")
    '''

#WAP to take input from the user and should print True if a is 6 and b is 6 and c is not 6, otherwise it should print  false
a = int(input("Enter the value of a:"))
b = int(input("Enter the value of b:"))
c = int(input("Enter the value of c:"))
if(a==b and c!=6):
    print("True")
else:
    print("False")