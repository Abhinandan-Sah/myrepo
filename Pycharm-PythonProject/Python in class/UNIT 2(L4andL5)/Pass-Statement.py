                        #Pass->pass is used when the user doesn't want any code to execute
                         #    ->it is used when user want to execute code so to come back to execute a condition later
a=10
b=20
if(a<b):
    pass
else:
    print(b>a)

#check for no. that belongs to list
    #check if no. is odd
        #if odd then pass
        #else print even number

n=int(input())
numbers=[1,2,4,3,6,5,7,10,9]
if n in numbers:
    if(n%2==0):
        print("Even")
    else:
        pass
else:
    print("It not belongs to list")


