import keyword
print(keyword.kwlist) #keyword is a inbuilt library in python..
print(keyword.iskeyword('elif'))
print(keyword.iskeyword('name'))
'''
a=10;
print(a)
b= 3.14
print(b);

c="Avi"
print(c);
d='hello' #we can print string value in single quote also '
print(d)

print(a,b,c) #printing all in one

print(a, b, c, sep="-")  #we can use seperator to seprate  between the number

#NOTE: python automatically create new line when we declare "print"

print(a, b, c, end='$') #
print(a)

#W.A.P to enter your detail
Name = "Abhinandan"
print(Name)

registration = 12202699
rollno = "K22AE"
print(registration, rollno, sep="@")
city = "Jalandhar"
age = 20
print(city, age, sep=' ')

x=type(Name)
print(x)
print(type(registration))

#finding id of variable
x=id(a);
print(x)  #printing Address of a

b=20;
print(id(b));

a=10;
print(a)
print(id(a))
a= 20
print(a)
print(id(a))

#case 3
a=50;
print(a)
print(id(a))
b=a;
print(id(b))

h=-1
print(h)
print(id(a))
i=2
print(i)
print(id(b))

#example of storing garbage value

p=33  #here p is storing garbage value after program run
print(p)
print(id(p))
p=60
print(p)
print(id(p))

print(p) #Now the value of p is 60

#Next program
a=b=c=10; #here a b and c is refering to 10(no variable store copy of 10 like c++)
#a=10
#b=10
#c=10
print(a, b, c)
print(a)
print(b)
print(c)

#WAP to assign the integer 999, float 24.789 and string

integer = 999       #it can be also written as this (a, b, c = 999, 24.789 , "python Interpreter
print(integer)
floating = 24.789
print(floating)
y = "python Interpreter"
print(y)'''

