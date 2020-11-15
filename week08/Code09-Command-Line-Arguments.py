# Printing command-line arguments

from sys import argv, exit

if len(argv) == 1:
	print('You need to have command-line arguments')
	exit(1)

print('Printing command-line arguments via array access:')
for i in range(len(argv)):
	print(argv[i])

print('Printing command-line arguments via list iteration:')
for i in argv:
	print(i)