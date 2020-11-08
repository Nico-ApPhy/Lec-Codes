#!/usr/bin/env  python3
# Miscellaneous parts of conditions

# pass can be used as placeholder

number = input('Please input a number: ');
if int(number) == 7:
    print("The magic number has been input!!!")
print("You input " + number)

print("An equivalent if block but more readable")
if int(number) == 7:
    print("The magic number has been input!!!")
else:
    pass
print("You input " + number)

# Ternary if condition statement
# Format: expression1 if condition else expression2
total = 5
items = 2
print('Average = {0}'.format(total / items if items != 0 else 'N/A'))
