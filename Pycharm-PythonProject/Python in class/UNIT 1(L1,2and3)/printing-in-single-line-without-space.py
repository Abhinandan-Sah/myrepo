import random as r
import string as s

for i in range(100):
    x="".join(r.sample(s.ascii_letters),7)
    print(x)
