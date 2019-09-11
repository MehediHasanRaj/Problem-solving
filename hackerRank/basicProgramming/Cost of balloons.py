
t = int(input())
for x in range(t):
    row, column, sum = 0, 0, 0
    price_bellon = (input().split(' '))
    participant = int(input())
    for i in range(participant):
        line = input().split(' ')
        row += int(line[0])
        column += int(line[1])
    p1 = row*int(price_bellon[0]) + column*int(price_bellon[1])
    p2 = column * int(price_bellon[0]) + row*int(price_bellon[1])

    if p1<p2:
        print(p1)
    else:
        print(p2)

