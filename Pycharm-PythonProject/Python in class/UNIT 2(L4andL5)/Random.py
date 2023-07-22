import random

#choice(seq)- This function returns a random element from the non-empty sequence.
seq="abcdefghijklmnopqrstuvwxyz"
print(random.choice(seq))

#shuffle(list) - This function returns shuffled list.
L1=[10,20,2,3,1]
random.shuffle(L1)
print(L1)

#randint(a,b) - This function returns a random integer between a and b inclusive
print(random.randint(1,5))  #-> it can also return 1 or 5 also
#print(random.randint(1,5))
for i in range(5):
    print(random.randint(1,100))

#seed() - This functon always returns the same random value.
for i in range(5):
    random.seed(10)
    print(random.randint(1,100))

#random() is for floating value -> Using random() get the next random number in the range(0.0,1.0)
#means a random float value f, such that 0 is less than or equal to f
#and f si less than 1.

print(random.random())


#randrange(start, stop, step) - This function returns random value in the given
#sequence based on step.

print(random.randrange(2,10))
print(random.randrange(2,10,2))


