number = input("enter a number to calculate dv: ")
i = 0
sum = 0

while number >= 10:
    sum = sum + number % 10 * (i + 2)
    number = (number - number % 10) / 10
    i = i + 1

sum = sum + number * (i + 2)

dv = 11 - sum % 11

if dv == 11:
    dv = "X"

print(dv)
