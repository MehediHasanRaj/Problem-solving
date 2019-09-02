#https://codeforces.com/problemset/problem/4/A

#codeforce problem
from sys import stdout, stdin
input = int(stdin.readline().strip())
if input % 2 == 0 and input>2:
    stdout.write("YES\n")
else:
    stdout.write("NO\n")
