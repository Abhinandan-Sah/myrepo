'''TAke two stings as input from the console using input(function).
Write a program using memmbership operators to check the given second sting is present in the first sting or not.
Print to the console, the result of the two input stings as shown in theprint(example)'''
'''
strings=input("Enter a sting:")
substring=input("Enter a substing:")
print("{} in {}: {}".format(substring,strings,substring in strings))
'''

#USE OF "is" OPERATOR

#FOR INTEGER
'''
a=int(input("Enter a:"))
b=int(input("Enter b:"))
c= a is b
print(a,"is",b,"=",c)
'''
#FOR float
'''
a=float(input("Enter a:"))
b=float(input("Enter b:"))
c= a is b
print(a,"is",b,"=",c)
'''
#FOR string

a=(input("Enter a:"))
b=(input("Enter b:"))
c= a is b
print(a,"is",b,"=",c)


#WAP that demonstrates operator precedence Take input a and b as input form the console using input() function
a=int(input("Enter value of a:"))
b=int(input("Enter value of a:"))
c=a+b*5
d=(a+b*5*10/2)
print("{}+{}*5={}".format(a,b,c))
print("{}+{}*5*10/2={}".format(a,b,d))

