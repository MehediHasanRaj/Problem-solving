from sys import stdout,stdin

# 1+(2+3)+(4+5+6)+......+nth term

n = int(stdin.readline())
p,sum = 1,0
for i in range(1,n+1):
    for j in range(1,i+1):
        sum += p
        p+=1
stdout.write(str(sum))




