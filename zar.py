import random

z1 = random.randint(1,6)
z2 = random.randint(1,6)

if (z1 == 6 and z2 == 5):
        print("Dau cu zaru 6 5 n-am nevoie de servici")
elif (z1 == 6 and z2 == 6):
        print("Dau cu zaru 6 6 ca mine nu se mai naste")
else:
        print("Dau cu zaru", z1, z2)
