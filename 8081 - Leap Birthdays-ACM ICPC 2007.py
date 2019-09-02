from sys import stdout,stdin
def  leapyear(year):
    if year % 400 == 0:
        return True
    elif year % 100 == 0:
        return False
    elif year % 4 == 0:
        return True
    else:
        return False

t = int(stdin.readline())

for i in range(t):
    x = [int(x) for x in stdin.readline().strip().split()]
    count = 0
    p = x[2]

    if x[0] == 29 and x[1] == 2:
        for p in range(x[2], x[3]+1, 4):
            if leapyear(p):
                count += 1
        stdout.write("Case " + str(i + 1) + ": " + str(count - 1) + "\n")
    else:
        count = (x[3] - x[2] ) + 1
        stdout.write("Case "+str(i+1)+": "+str(count-1)+"\n")
