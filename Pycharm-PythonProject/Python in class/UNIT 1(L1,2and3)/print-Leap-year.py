#WAP to check if the year entered by the user is a leap year or not
'''year=int(input('Enter year:'))
if((year % 400 == 0) or
     (year % 100 != 0) and
     (year % 4 == 0)):
    print("Given Year is a leap Year");
  #Else it is not a leap year
else:
    print ("Given Year is not a leap Year")'''

#WAP to find fibonacci series
num1=0
num2=1
total=int(input("Total fibonacci series to find:"))
count=0
sum=0
print(num1,num2)
while(count<=total):
    sum=num1+num2
    num1=num2
    num2=sum
    count+=1
print("Fibonacci is = ",sum)



