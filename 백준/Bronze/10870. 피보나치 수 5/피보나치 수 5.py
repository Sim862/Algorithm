n = int(input())

def Fibonacci(n):
    if n > 1:
        return  Fibonacci(n-1) + Fibonacci(n-2)
    elif n == 1:
        return  1
    else:
        return 0

print(Fibonacci(n))