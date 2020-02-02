
import typing

def factorial(n: int):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

print('Factorial: {}'.format(factorial(5)))