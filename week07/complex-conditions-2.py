#!/usr/bin/env  python3
# Complex conditions using and

# x = 'N/A'
x = 15
if x != 'N/A' and 5 < float(x) < 20:
    print('OK')
else:
    print('Not OK')

# Short-circuit evaluation is present.
# if 5 < float(x) < 20 and x != 'N/A':
# might result to an exception
