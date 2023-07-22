x=10
y=20.5
print("value of x={} and y={}".format(x,y))
print("value of x=%d and y= %f" %(x,y))  #float will reserve upto 6 decimals
print("value of x=%d and y= %.2f" %(x,y))  #we can also control decimals by using %.2f or %.7f

#Simple calculation in python
'''a = int(input("Enter a num1:" ))
b = int(input("Enter a num2:" ))
c=a+b
print("Addition of ",a ," and ", b, " = ", c)
d= a-b
print("Subtraction of ",a ," and ", b, " = ", d)
e=a*b
print("Multiplication of ",a ," and ", b, " = ", e)
f=a/b
print("Division of ",a ," and ", b, " = ", f)
g=a%b
print("MOD of ",a ," and ", b, " = ", g)'''

#USE OF divmod(input, input) it will return(Quotient, reminder)
'''num1 = int(input("Enter a num1:" ))
num2 = float(input("Enter a num2:"))
QR= divmod(num1, num2)
print(QR)'''

#Use of comparison opreator
'''num1 = int(input("Enter a num1:" ))
num2 = int(input("Enter a num2:"))
print("is", num1, " greater than " ,num2, " = ", num1>num2)
print("is", num1, " less than " ,num2, " = " ,num1<num2)
print("is", num1, " equal to " ,num2, " = ", num1==num2)
print("is", num1, " not equal to " ,num2, " = ", num1!=num2)
print("is", num1, " less than or equal to " ,num2, " = " ,num1<=num2)
print("is", num1, " greater than or equal to " ,num2, " = ", num1>=num2)'''

#comparison of two string
name1 = "abcd"
name2 = "abCd"
print(name1==name2)

#how to find order of string
print(ord("A"))






