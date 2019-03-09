from sys import stdin
from math import sqrt

input = stdin.readline().split()

for index in range(int(input[0]), int(input[1])+1):
    is_prime = True
    if index == 1:
        is_prime = False

    for i in range(2, int(sqrt(index))+1):
        if index % i == 0:
            is_prime = False
            break
    if is_prime:
        print(index)