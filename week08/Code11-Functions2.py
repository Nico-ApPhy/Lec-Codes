def volume(length = 1, width = 1, height = 1):
	return length * width * height

print('Volume of rectangular prism with length 10, width 20, height 30:', volume(10, 20, 30))
print('Volume of rectangular prism with default arguments:', volume())
print('Volume of rectangular prism with keyword argument of width 10:', volume(width=10))
print('Volume of rectangular prism with keyword argument of width 10, height 30:', volume(width=10, height=30))