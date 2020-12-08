def reverse_int(n):
    return int(str(n)[::-1])
num1 = 100
num2 = 100
maxPal = 0
product = 0
while num1 < 1000:
    num2 = 100
    while num2 < 1000:
        product = num1 * num2
        if product == reverse_int(product) and product > maxPal:
            maxPal = product
            print(maxPal)
        num2 += 1
    num1 += 1
print(maxPal)
    


