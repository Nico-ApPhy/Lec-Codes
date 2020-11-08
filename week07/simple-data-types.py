#!/usr/bin/env python3
# Simple data types

dataType = type(17)
print(dataType)
dataType = type('hello')
print(dataType)
dataType = type(3.14)
print(dataType)
dataType = type(True)
print(dataType)
dataType = type(False)
print(dataType)

first = 'Good'
second = 'Afternoon'
greeting = first + second
print(greeting)
multiple = first * 3
print(multiple)

print('1' + '1')
#print('The answer is ' + 42)
print('The answer is ' + str(42))
#print(1 + '1')
print(1 + int('1'))
