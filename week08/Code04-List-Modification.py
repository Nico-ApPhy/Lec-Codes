#!/usr/bin/env  python3
# Illustatring modifying a list

# 3 ways of adding elements to a list:
# 1. append(element)
first_list = [1, 2, 3, 4, 5]
first_list.append(99)
print('First list:', first_list)

# 2. insert(position, element)
# Insers element at the position
first_list.insert(2, 50)
print('First list:', first_list)

# 3. extend(list)
# Extends a list by adding a list to the end of the original list
first_list.extend([6, 7, 8])
print('First list:', first_list)

# Adding lists
second_list = [1, 2, 3] + [4, 5]
print('Second list:', second_list)

# 3 ways to remove elements from a list
# 1. pop([index])
# Removes the element in the index position and returns it to the point where it was called.
# If w/o parameter, it returns the last element.
print('First list:', first_list)
print('Pop from first list:', first_list.pop())
print('Pop position 2 from first list:', first_list.pop(2))
print('First list:', first_list)

# 2. remove(element)
# Removes the element specified in the parameter.
# In case there is more than one copy, it removes the first one, counting from the left.
# Unlike pop(), this function does not return anything.
first_list.remove(99)
print('First list after removing 99:', first_list)

# 3. del command
del first_list[0]
print('First list after index 0:', first_list)
