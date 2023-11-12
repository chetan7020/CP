s = "HelloWorld"
result = s[1:8:2] + s[-1:0:-2]
print(result)


s = "PythonIsAwesome"
result = s[::-3] + s[5:10][::-1]
print(result)



def divide(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        result = "Cannot divide by zero."
    else:
        result += 10
    finally:
        return result

output = divide(5, 2) + divide(10, 0)
print(output)




result = list(range(1, 10, 2)) + list(range(10, 1, -1))
print(result)



result = sum(range(1, 21, 2)) * len(range(2, 21, 2))
print(result)


numbers = [1, 2, 3, 4, 5]
print(*numbers)


x = 5
y = 10
result = "Greater" if x > y else "Smaller"
print(result)


def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

result = factorial(4)
print(result)


l = set(list(range(1, 10, 1)))


