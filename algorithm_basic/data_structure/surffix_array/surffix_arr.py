from sys import stdin

string = stdin.readline().strip()
surffix_array = []
for index in range(len(string)):
    surffix_array.append(string[index:])
surffix_array.sort()
for word in surffix_array:
    print(word)