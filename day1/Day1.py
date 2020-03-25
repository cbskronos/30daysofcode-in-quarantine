def fact(num):
    fact=1
    
    for number in range(num,1,-1):
        fact=fact*number
    
    return fact

number=int(input("Enter the number\n"))

factorial=fact(number)

print("Factorial is "+str(factorial))
