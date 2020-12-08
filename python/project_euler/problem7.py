count = 1
i = 3
while (count < 10032):
    j = 2
    while(j <= (i/j)):
        if not(i%j): break
        j = j + 1
    if (j > i/j):
        count += 1  
        print(count)
        print(i)
    i = i + 2
