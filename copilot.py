#write a function to multiply two numbers
def multiply(a, b):
    return a * b

#write a function to add two numbers
def add(a, b):
    return a + b

#write a function to return lcm of two numbers
def lcm(a, b):
    return a * b / gcd(a, b)

#function to return if palindrome
def isPalindrome(s):
    return s == s[::-1]

#function to return gcd of two numbers
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

#function to return reverse of a string
def reverse(s):
    return s[::-1]

#function to return lcm + 1 of two numbers
def lcm1(a, b):
    return (a * b) / gcd(a, b) + 1

#function to return sum of lcm and gcd of two numbers
def sumlcmgcd(a, b):
    return a * b / gcd(a, b) + gcd(a, b)
    