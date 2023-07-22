'''1.Convert feet into meter  Wap
read number in feet, convert it t0 meter and display result.. One foot is 0.395meter
enter value for feet: 16.5
16.5 feet is 5.0325 meters'''

'''feet = float(input("Enter the length: "))
meter = (feet) / 3.2808
print(feet, "feet is ",meter ,"meter")'''

'''2.(Financial Application: Calculate Tips) That reads the subtotal and Gratutity And Total. If the user Enters 10 for
subtotal and 15% for Gratutiy  display is 1.5and 11.5 as Total
Enter the subtotal and gratuity rate:
INput: 15.65, 15
The gratuity is 2.35 and Total is
Output: 18.04'''

'''subtotal=float(input("enter the value of subtotal:"))    #enter the input value subtotal
gratuity_rate=float(input("enter the value of gratuity rate:"))   #enter another input value gratuity rate
gratuity=(gratuity_rate/100)*subtotal  #formula for gratuity
total=gratuity+subtotal                 #formula for totals
print("the gratuity is",int(gratuity*100)/100,"and the total is",int(total*100)/100 )  #print the required output'''

# #REverse a number
# a=(input("Enter a number:"))
# n=len(a)
# s=0
# e=n-1
# mid=s+((s+e)/2
# while(s<e):
#     swap(a[s],a[e])
#
# print(r)

#print sum of even number
'''n=int(input("Enter number:"))
sum=0
while(n!=0):
    if(n%2==0):
        sum=sum+n
    n-=1
print(sum)'''

#print sum of all integers between 0and num ((USING WHILE ELSE))
'''num=int(input("Enter a number:"))
sum=0
if(num>=0):
    while(num!=0):
        sum=sum+num
        num-=1
else:
    while(num!=0):
        sum = sum+num
        num+=1
        
print(sum)'''
                # or
'''num=int(int("Enter a number:"))
i=0
sum=0
while i<=num:
    sum=sum+i
    i+=1
else:
    while i>num:
        sum=sum+i
        i-=1
print(sum)'''

#WAP fibonacci series
k=int(input("k: "))
a=0
b=1
print(a)
print(b)
sum=0
while(k!=1):
    sum=a+b
    print(sum)
    a=b
    b=sum
    k-=1

print("sum:",sum)
