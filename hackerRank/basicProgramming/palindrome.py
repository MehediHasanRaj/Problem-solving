from collections import deque

stack = deque()
string = input()
for s in string:
    stack.append(s)

for ss in string:
    x = stack.pop()
    if ss != x:
        print('NO')
        break
else:
    print('YES')


