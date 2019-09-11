
input = [int(x) for x in input().split()]
count = 0
for i in range(input[0],(input[1]+1)):
    if i % input[2] == 0:
        count +=1
print(count)