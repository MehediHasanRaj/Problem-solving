import math


def prime(n):
    primes = [1 for i in range(n + 1)]
    primes[0] = 0
    primes[1] = 0
    r = int(math.sqrt(n + 1))
    for i in range(2,r):
        if primes[i] == 1:
            for j in range(2, n + 1):
                if j * i <= n:
                    primes[i * j] = 0
                else:
                    break
    return primes




if __name__== '__main__':
    n = int(input())
    pr = prime(n)
    for i,j in enumerate(pr):
        if j==1:
            print(i,end =' ')
