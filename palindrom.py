from collections import deque
from sys import stdout,stdin
stack = deque()

input = stdin.readline().strip()

for x in input:
    stack.append(x)

for x in input:
    if x!=stack.pop():
        stdout.write("not palindrome")
        break
else:
    stdout.write("palindrome")

