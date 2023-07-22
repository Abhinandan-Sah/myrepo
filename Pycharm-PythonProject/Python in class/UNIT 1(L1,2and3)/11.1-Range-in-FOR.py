#for x in range(10):
    #print(x)  #->it will start from 0 and end at 9(1->9)

'''#for x in range(5,15)  #->It WILL START FROM 5 AND END AT 14(5,6,7,...14)
    #print(x)'''

#print all the even number from 1 to 50 using for and while loop

#FOR LOOP
'''a=int(input("Enter number:"))
x=2
for t in range(10,50):
    if(x%2==0):
        print(x)'''

#While
'''a=int(input("Enter number:"))
x=10
while(a!=1):
    print(x)
    x+=2
    a-=1'''

'''#
i=0
for i in range(50):
    if(i%2==0):
        print(i)
    i=i+1

#
for i in range(10,50):
    print(i)
    i+=1'''

#for i in range('''start'''10,'''end'''50,-2'''Value decre''')

#print Table of 5
n=int(input("Enter table you want to find:"))
for i in range(1,20+1,1):
    ans=n*i
    print("{}*{}={}".format(n,i,ans))
else:
    print("Number of row existed")