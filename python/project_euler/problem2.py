a,b = 0, 1
result = 0
while a < 4000000:
    a, b = b, a+b
    if (b %2 ==0):
        result+=b
print result
