from sys import stdin

numbers = stdin.readline().split()
first = numbers[0] + numbers[1]
second = numbers[2] + numbers[3]
print(int(first)+int(second))
