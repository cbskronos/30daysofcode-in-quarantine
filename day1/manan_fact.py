# Factorial of the number using Iterative Approach

def factorial(num):
    fact = 1
    while(num>1):
        fact = fact * num
        num = num - 1
    return fact

print("Enter The Number whose factorial you want to find: ")
num = int(input())
print(factorial(num))
