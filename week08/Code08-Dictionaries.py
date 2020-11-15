#!/usr/bin/env  python3
# Dictionary stores arbitrary indexed unordered data types.
# Data is stored as key:value
# Only immutable objects can be used as keys: strings, tuples, numbers

students = {'2020-11111':'Juan Dela Cruz', '2020-22222':"Pedro Santos", '2020-33333':'James Mendoza'}
print("2020-22222 is the student number of {0}".format(students['2020-22222']))

# A dictionary can be created from a sequence with dict.
print("Using dict:")
rgb = [('red', 'ff0000'), ('green', '00ff00'), ('blue', '0000ff')]
colors_d = dict(rgb)
print('colors:', colors_d)

# dict also accepts name=value pairs in the keyword argument list
print("dict as name=value:")
rgb = dict(red='ff0000', green='00ff00', blue='0000ff')
print('RGB colors:', rgb)

# elements can be added into a dictionary
print("adding elements into a dictionary:")
rgb = {}
rgb['red'] = 'ff0000'
rgb['green'] = '00ff00'
print('Added RGB:', rgb)
print('Added RGB length:', len(rgb))
rgb['blue'] = '0000ff'
print('Added RGB:', rgb)
print('Added RGB length:', len(rgb))

# Querying w/o exception: get(k, x)
# k - key of the element
# x - element that will be returned in case k is not found
print("Querying without exception:")
# print(students['2020-44444'])
if '2020-11111' in students:
	print('Student 2020-11111', students.get('2020-11111'))
else:
	print('No student found')

if '2020-44444' in students:
	print('Student 2020-44444', students.get('2020-44444'))
else:
	print('No student found')

print('Student 2020-11111', students.get('2020-11111', 'No student found'))
print('Student 2020-44444', students.get('2020-44444', 'No student found'))
print('Student 2020-44444', students.get('2020-44444'))

# Erasing elements
print("Erasing elements:")
del students['2020-33333']
print('Students:', students)
