#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]


max_palindrome = 0
for i in range(999, 899, -1):
    for j in range(999, 899, -1):
        product = i * j
        if is_palindrome(product) and product > max_palindrome:
            max_palindrome = product

print("{:d}".format(max_palindrome))
