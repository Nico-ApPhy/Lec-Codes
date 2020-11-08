#!/usr/bin/env  python3
# If-ElseIf-Else structure
# General format:
#   if EXPRESSION1:
#       BLOCK1
#   elif EXPRESSION2:
#       BLOCK2
#   elif EXPRESSION3:
#       BLOCK3
#   else:
#       BLOCK4

code = input('Enter your code: ')
codesize = len(code)
if codesize < 10:
    print('The code must be have at least 10 characters')
    if codesize == 0:
    	print('Hey! You must input something!!!')
elif codesize < 25:
    print('The code is OK')
else:
    print('The code is too long')
