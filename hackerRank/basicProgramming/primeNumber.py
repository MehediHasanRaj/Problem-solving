from math import sqrt

def isPrime(n):
    k = int(sqrt(n+1))
    for x in range(2,k+1):
        if(n % x == 0):
            return False
    return True

n = int(input())
if n == 2:
    print(n)
else:
    print(str(2) + ' ', end='')
    for i in range(3,n+1):
        if isPrime(i):
            print(str(i) + ' ', end='')
    print()
