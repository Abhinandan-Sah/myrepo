#1.predict output of the following python program.
'''a,b,c=5,1,15
if(a<b)and(a<c):
    print("A is minimum")
elif(b<a)and (b<c):
    print("B is minimum")
else:
    print("C is minimum")'''

#2.WAP to calculate the electricity bill, we must understand electircity charges and rates.
unit= float(input("Enter unit of electricity:"))
if(unit>=1 and unit<=100):
    print("Charge =", (unit*1.5))
if(unit>=101 and unit<=200):
    print("Charge =", (unit*2.5))
elif(unit>=201 and unit<=300):
    print("Charge =", (unit*4))
elif(unit >= 301 and unit <= 350):
    print("Charge =", (unit * 5))
elif(unit >= 350):
    print("Charge =", (unit*15))
else:
    print("Incorrect value")

#(USE of Ladder if)
#3.WAP that prompts the user to enter a weight in pounds and height in inches and then displays the BMI
# .Note that one pound is 0.45359237 kilograms and one inch is 0.0254 meters. (Use ladder if Concept)
weightInKilogram=float(input("Enter weight in kilogram:"))
heightInMeters=float(input("Enter height in meter:"))
bmi=weightInKilogram/(heightInMeters*heightInMeters)
if(bmi<18.5):
    print("Underweight")
if(bmi<25):
    print("Normal")
if(bmi<30):
    print("Overweight")
else:
    print("Obese(Beast)")

#(4.)
weight1=float(input("Enter weight for package 1:"))
price1=float(input("Enter price for package 1:"))
weight2=float(input("Enter weight for package 2:"))
price2=float(input("Enter price for package 2:"))
weight3=float(input("Enter weight for package 3:"))
price3=float(input("Enter price for package 3:"))

if((weight1 > weight2 and weight1>weight3) or (price1<price2 and price1<price3)):
    print("Package 1 has the better price")
elif((weight2 > weight1 and weight2>weight3) or (price2<price1 and price2<price3)):
    print("Package 2 has the better price")
else:
    print("package 3 has the better price")

#5.WAP to check a triangle is equilateral, isosceles or scalene
#Node:An equilateral triangle is a tringle inwhich all side are equal.
#A scalene triangle in which all side are not equal

side1=int(input("Enter a side 1:"))
side2=int(input("Enter a side 2:"))
side3=int(input("Enter a side 3:"))

if(side1==side2==side3):
    print("It is an equilateral triangle")
if(side1==side2 or side1==side3 or side2==side3):
    print("It is an isosceles tiangle")
else:
    print("It is scalene triange")


#WAP to check if the year entered by the user is a leap year or not.