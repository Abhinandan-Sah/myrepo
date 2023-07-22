#TAKING INPUT FROM USER FROM USER
'''
name = input("Enter the name: ")
print(name)
print(type(name))

com = complex(input("Enter the complex number: "))
print(com)
print(type(com))

age = int(input("Enter you age: "))
print(age)
print(type(age))

regno = int(input("Enter your registration number: "))
print(regno)
print(type(regno))

percento = float(input("Enter your percentage: "))
print(percento)
print(type(percento))

boln = True
print(boln)
print(type(boln))
'''


#ARITHMETHIC OPERATION
'''WAP to take input from the user a, b, c, d to find(a+b/c*d)

a = int(input("Enter the value of a:" ))
b = int(input("Enter the value of b:" ))
c = int(input("Enter the value of c:" ))
d = int(input("Enter the value of d:" ))

number = (a+b) / (c*d)
print("Answer is:" ,number)
'''

#STRING TYPE OPERATION
'''a = input('enter the value of a: ')
b = input('enter the value b: ')
print(a+b)          #It will join two values
'''

#Assignment operation and Augmented assigment statement
#augmented assigment statement -> b *= 5
'''
#WAP to find area of Rectangle
length = int(input("Enter the length: "))
breath = int(input("Enter the breath: "))
Area = (length*breath)
print("The area of rectangle: ", Area)


#Wap to find area of circle
r = int(input("Enter the radius: "))
area = 3.14*r*r
print("Area of circle is: ",area)
'''

#INBUILT LIBRARY OF PYTHON TO SOLVE ARITHMETIC FUNCTION
'''import math
help(math)
help(math.pow)'''

'''
r = int(input("Enter the radius: "))
area = 3.14* math.pow(r,2)                 #using python inbuilt features of math
print("Area of circle is: ",area)'''

''''''
#WAP to find cube of a number
''' l = int(input("Enter the length"))
cube = math.pow(l,3);                  #or (a**3) to A*A*A both are same
print("Cube of a number is: ", cube)'''


#(Compute the volume of a cylinder). WAP that reads in the radius and lengh of a cylinder and compute
#the area and volume using following formulas:
'''
length = int(input("Enter length of cylinder: "))
radius = int(input("Enter radius of cylinder: "))
area = radius*radius* 3.14
volume = area* length
print("Volume of cylinder is: ", volume)

sample run of the program: 
Enter the radius and length of a cylinder: 5.5, 12
The area is 95.0331
The volume is 1140.4
'''
    
#WAP to find simple interest
'''p= int(input("Enter principle: "))
t= int(input("Enter time: "))
r= int(input("Enter rate: "))
SI = (p*t*r)/100
print("Simple interest is: " , SI)
'''

#WAP to convert Celsius to Fahreheit
'''Celsius = float(input("Enter celsius: "))
Fahrenhit = (9/5) * Celsius + 32             #<<<<<Division gives a float value>>>>>>
print("Fahreheit is " , Fahrenhit)'''

#WAP to swap 2 numbers
'''a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
c = a
a = b
b = c
print(a, b)
'''