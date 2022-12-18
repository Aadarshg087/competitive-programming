num = int(input("Enter a number: "))

num = str(num)
even = 0
odd = 0
for i in num:
    if int(i) % 2 == 0:
        even = even + int(i)
    else:
        odd = odd+int(i)

print(even, odd)
