#print(type(type))

'''1. Tuples
A tuple is a data type similar to list.
a=(1,2,4,"a")

2.Sets
->A set is a mutable data type that  contains an unordered collection of items.
It does not contains duplicate element
Example: {1, 2, 3, 5, "a"}
'''

#printing list, tuple, and key
'''l = [1, 3, 4, 'Avi', 'class']
t = (12, 5, "a")
s = {1, 2, 5, "k"}
dictionary = {"chatinya": 5, "Avi": 17, 59:"Happy"}

print(l)
print(type(l))

print(t)
print(type(t))

print(s)
print(type(s))

print(dictionary)
print(type(dictionary))  #key is also called dictionary'''

#WAP to print your favourite place
'''name = input("Enter your favourite place:")
print("My favourite place is:",name)'''

#Ex1
nam ="Avi"
print("Good morning, %s!" %nam)   #This will prints "good morining, Ravi

#Ex2
a = 10
b= 20
str = "Hello"
print("The value of a = %d, b=%d and str=%s" %(a, b, str))
print("The value of a={}, b={} and str={}".format(a, b, str))   #we can also print like this instead of upper one

#WAP to input name , cgpa, age, percentage , age and mobile no
name = input("Enter your name:")
cgpa = float(input("Enter your cgpa:"))
percentage = float(input("Enter your percentage:"))
age = int(input("Enter your age:"))
mobile = int(input("Enter your mobile no.:"))

print(name, cgpa, percentage, age, mobile)
print("The value of name=%s, cgpa=%f, percentage=%d, age=%d, mobile no=%d" %(name, cgpa, percentage, age, mobile))
print("The value using formate of name={}, cgpa={}, percentage={}, age={}, mobile no={}" .format(name, cgpa, percentage, age, mobile))


