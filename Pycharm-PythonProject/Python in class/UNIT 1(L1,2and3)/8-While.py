# while condition:
#    body

#syntex for while-else
'''while condition:
    statement_1
    .....
    statement_n
else:
    statement_1
    ...
    statement_n'''

#WAP ask user to input number and find all the sum of all odd number
'''num=int(input("Enter a number:"))
n=1
sum=0
while n<=num:
    if(n%2!=0):
        sum=sum+n
    n+=1

print("Sum of all number up to ",num,"=",sum)
'''

#WAP to input reverse a number
'''num=int(input("Enter a number to make reverse:"))
r=0
while(num!=0):
    d=num%10
    r=(r*10)+d
    num=num//10
print("The reverse of the number is: ",r)'''

#WAP to print sum of number
'''num=float(input("Enter a number: "))
a=1
while(n>=0 and a<=num):
    sum=num*(num+1)/2
    a+=1

print("Sum of number from 0 to ",num,"=",sum)'''

#WAP To count Number of digit enter by the user
'''a=int(input("Enter a number to count digit:"))
n=0
while(a!=0):
    a=a//10
    n+=1
print(n)'''

#WAP to check if a number is palindrome or not
'''
num=eval(input("Enter a number:"))
x=num
r=0
while(num!=0):
    d=num%10
    r=(r*10)+d
    num=num//10
print("The reverse of the number is: ",r)

if(x==r):   #checking palindrome or not
    print("It is Palindrome")
else:
    print("Not palindrome")'''

#WAP to



print(hello)