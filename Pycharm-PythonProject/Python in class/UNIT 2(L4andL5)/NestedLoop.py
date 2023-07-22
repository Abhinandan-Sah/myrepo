                    #NestedLoop-> Loop inside loop
#EXAMPLE:1
for i in range(1,5):
    for j in range(i,5):
        if(j<i):
            print(i)

'''*****
   *****
   *****
   *****
   *****'''
for i in range(1,6):
    for j in range(1,6):
        print("*",end="")
    print()

'''
*
**
***
****
*****
'''
for i in range(1,6):
    for j in range(0,i):
        print("*",end="")
    print()

'''
1
12
123
1234
'''
for i in range(1,6):
    for j in range(1,i+1):
        print(j,end="")
    print()

'''
1
22
333
4444
55555
'''
for i in range(1,6):
    for j in range(1,i+1):
        print(i,end="")
    print()

'''
 A
 BB
 CCC
 DDDD
'''
for i in range(0,5):
    for j in range(0,i+1):
        print(chr(65+i),end="")
    print()

'''
a 
ab
abc
abcd
abcde
'''
for i in range(0, 5):
    for j in range(0, i + 1):
        print(chr(97 + j), end="")
    print()

'''
A
BC
CDE
DEFG
EFGHI
'''
for i in range(0, 5):
    for j in range(0, i+1):
        print(chr(65+i+j), end="")
    print()

'''
*****
****
***
**
*
'''
n=int(input("ENter the value of n: "))
for i in range(n,0,-1):
    for j in range(1,i+1):
        print("*", end="")
    print()

'''
12345
1234
123
12
1
'''
n=int(input("Enter the value of n: "))
for i in range(n, 0, -1):
    for j in range(1, i + 1):
        print(i, end="")
    print()

'''
print prime number in pattern
'''
n=int(input("start: "))
m=int(input("end: "))
flag=0
print("List of prime numbers are")
for i in range(n,m+1):
    for j in range(2,(i//2)+1):
        if(i%j==0):
            flag=1
    if flag==0:
        print(i)
    flag=0

'''
matrix=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
matrix1=[[0,0,0],[0,0,0],[0,0,0]]
print("matrix:",matrix
'''
'''
fin transpose of the matrix
'''
matrix=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
matrix1=[[0,0,0],[0,0,0],[0,0,0],[0,0,0]]
print("matrix:",matrix)
for i in range(3):
    for j in range(4):
        matrix1[j][i]=matrix[i][j]
print("transposed:",matrix1)

'''
octal,binary,hexadecimal
'''
x=63
print(x)
print("hexadecimal",hex(x))
print("octal",oct(x))
print("binary",bin(x))