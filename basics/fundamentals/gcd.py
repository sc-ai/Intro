//Program to find the GCD of two numbers in Python

def gcd(ab,bc):

    small=0

    gd=0

    if ab>bc:

        small==bc

    else:

        small==ab

    for i in range(1, small+1):

        if((ab % i == 0) and (bc % i == 0)):

            gd=i

    return gd

ab=int(input("Enter the first number: "))

bc=int(input("Enter second number: "))

t=gcd(ab,bc)

print("GCD is:",t)
