#!/usr/bin/env  python3
# Showing how to return a manipulated strings from immutable strings

typing_sentence = "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG."
print('Lower:', typing_sentence.lower())
print('Original:', typing_sentence)

typing_sentence = typing_sentence.lower()
print('Original is changed:', typing_sentence)

# replace(old, new, [,count])
# Replaces the old portion with new.
# If the optional argument count is used, only the first count occurrences will be replaced.
typing_sentence = 'THE QUICK BROWN FOX JUMPS OVER THE LAZY BROWN DOG'
new_sentence = typing_sentence.replace('BROWN', 'BLACK')
count_sentence = typing_sentence.replace('BROWN', 'BLACK', 1)
print('All were replaced:', new_sentence)
print('One was replaced:', count_sentence)

# split([sep [, maxsplit]])
# Separates the "words" of a string and returns them in a list.
# If the separator (sep) is not specified, the default separator is the white space.
words = typing_sentence.split()
print('Sentence as list:', words)
record = "Juan dela Cruz,2018-12345,jdelacruz@up.edu.ph"
record_list = record.split(",")
print('Split record:', record_list)

# join(seq)
# join is the inverse of split. It joins the sequence using a string as a glue.
student_record = ";".join(['Juan dela Cruz', '2018-12345', 'jdelacruz@up.edu.ph'])
print('Joined student record:', student_record)