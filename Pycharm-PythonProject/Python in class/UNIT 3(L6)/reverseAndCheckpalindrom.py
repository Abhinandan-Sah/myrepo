#Reverse a number
'''def reverse(a):
    s=0
    while(a!=0):
        m=a%10
        s=s*10+m
        a=a//10
    return s
a=int(input("Enter a number: "))
print(reverse(a))

#check palindrome
def reverse(a):
    s=0
    while(a!=0):
        m=a%10
        s=s*10+m
        a=a//10
    return s

a=int(input("Enter a number: "))

x=(reverse(a))
if(x==a):
    print("palindrome")
else:
    print("Not palindrome")'''

#WAp
def sayhello(username):
    greet='hello'
    print(greet+" "+username)


user=['Ram','mahesh','vasudha','urna','shekhar',"john"]
for i in user:
    sayhello(i)

#Write a program to print a pascal triangle,and print the result  as shown:
''' num: 4
    1
    1 1
    1 2 1
    1 3 3 1'''




