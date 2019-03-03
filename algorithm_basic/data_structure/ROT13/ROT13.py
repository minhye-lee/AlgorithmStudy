from sys import stdin
import codecs

string = stdin.readline()
print(codecs.encode(string, 'rot_13'))
