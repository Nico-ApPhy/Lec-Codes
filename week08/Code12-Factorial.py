def factorial(number):
    if number <= 1:
        return 1
    return number * factorial(number - 1)

for i in range(30):
    print(f'{i}! = {factorial(i)}')