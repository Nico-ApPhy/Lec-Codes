#!/usr/bin/env  python3
# Illustrating the use of lists
# A list is an ordered collection of objects.

first_list = [1, 2, 3, 4, 5]
print('1st list;', first_list)

other_list = [1, 'two', 3, 4, 'last']
print('other list:', other_list)

nested_list = [1, 'two', first_list, 4, 'last']
print('nested list:', nested_list)

empty_list = []
print('empty list:', empty_list)

# Accessing list elements
print('1st element of 1st list:', first_list[0])
print('2nd element of 1st list:', first_list[1])

# Negative elements are used to access lists from the right
print('1st element of 1st list from right:', first_list[-1])
print('4th element of 1st list from right:', first_list[-4])
print(f'Average of 1st list: {sum(first_list) / len(first_list)}')

# list() function turns a non-list object into a list
aseq = "atggctaggc"
print('string converted to list:', list(aseq))

# * operator can be used to initialize a list with the same item repeated multiple times
samples = ['red'] * 5
print('repeating list items:', samples)

# Pre-populating a list with empty values
samples = [None] * 5
print('empty values in list:', samples)

# List by enumeration
a = [0, 1, 2, 3, 4, 5]
print('List by enumeration:', a)

# List by comprehension
multiples_3 = [3 * x for x in a]
print('List by comprehension:', multiples_3)
