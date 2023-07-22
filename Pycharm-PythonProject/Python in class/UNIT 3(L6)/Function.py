#def function_name(parameters):
#    """A comment on what this function does"""
#     statment(s)
#       return list/value

'''def helloworld():
    print("Hello")

def sum(x,y):
    """This function will add x and y"""
    print(x+y)
    #print(sum.__doc__) #to print doc string(comment)
def sub(x,y):
    print(x-y)
def multi(x,y):
    print(x*y)

x=int(input("Enter a number:"))
y=int(input("Enter second number:"))
helloworld()
sum(x,y)
sub(x,y)
multi(x,y)'''


# #for return statment
# def add(a,b):
#     s=(a+b)
#     return s
# print(add(10,20))

str1=str(input())
str2= ''
l=len(str1)
for i in range(1,l+1):
    for j in range(1,l):
        str2 += str1[i-1]
print(str2)

































































































































































#WAP take 3 input from the user and add , sub, multiplication
def sum(x,y,z):
    """This function will add x and y"""
    return (x+y+z)
    #print(sum.__doc__) #to print doc string(comment)
def sub(x,y,z):
    return (x-y-z)
def multi(x,y,z):
    return (x*y*z)

x=int(input("Enter a number:"))
y=int(input("Enter second number:"))
z=int(input("Enter third number:"))
print(sum(x,y,z))
print(sub(x,y,z))
print(multi(x,y,z))

