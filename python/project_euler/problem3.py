num = 600851475143
primes = [2]
i = 3
while (i < num):
    j = 2
    while(j <= (i/j)):
        if not(i%j): break
        j = j + 1
    if (j > i/j):
        print(i)
        primes.append(i)
    i = i + 2
for p in primes:
    print(p)
    
