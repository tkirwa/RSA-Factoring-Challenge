#!/usr/bin/python3


import sys

def factorize(n):
    factors = []
    p = 2
    while n > 1:
        while n % p == 0:
            factors.append(p)
            n = n / p
        p = p + 1
    return factors

with open(sys.argv[1], 'r') as f:
    for line in f:
        n = int(line.strip())
        factors = factorize(n)
        print("{}={}*{}".format(n, factors[0], int(n/factors[0])))
