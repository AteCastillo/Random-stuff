#!/usr/bin/env python3

#reverse a string
'''
for number in range(0, 100):
    if number != 99:
        print ("{:02d}".format(number), end=",")
    else:
        print (number)
    '''
'''
for number in range(100):
    if number != 89:
        last_digit = number % 10
        first_digit = number / 10
        if first_digit < last_digit:
            print ("{:02d}".format(number), end=",")
    else:
        print (number)
    '''
''' fizzbuzz numbers
for number in range(1, 100):
    if number % 15 == 0:
        print ("fizzbuzz", end=" ")
    elif number % 3 == 0:
        print ("fizz", end=" ")
    elif number % 5 == 0:
        print ('buzz', end=" ")
    else:
        print (number, end=" ")
'''
''' reverse a string
abc = 'abcdefghijklmnopqrstuvwxyz'
print(abc[::-1])
'''

for i in range (5):
    
    print ('*')