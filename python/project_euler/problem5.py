divisors = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21]
num = 1
index = 0
done = False
while index < 21:
    if num%divisors[index] == 0:
        index = index + 1
    else:
        num = num + 1
        index = 0
print(num)
