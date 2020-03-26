## Day1 Solutions

### Q) Find factorial of a given number using iterative approach.

##### Solution submitted by [Manan Bedi](https://github.com/manan-bedi2908) `Python`
```python
def factorial(num):
    fact = 1
    while(num>1):
        fact = fact * num
        num = num - 1
    return fact

print("Enter The Number whose factorial you want to find: ")
num = int(input())
print(factorial(num))
```

##### Solution submitted by [Akshay Sharma](https://github.com/akshay2742) `Python`
```python
def fact(num):
    fact=1
    
    for number in range(num,1,-1):
        fact=fact*number
    
    return fact

number=int(input("Enter the number\n"))

factorial=fact(number)

print("Factorial is "+str(factorial))
```

##### Solution submitted by [Aditya](https://github.com/paditya99) `C++`
```c++
#include <iostream>
using namespace std;

int main()
{
   int a,result=1;
   cout<<"Enter the number of which you want to find the factorial: ";
   cin>>a;
   for(int i=a;i>=2;i--){
      result=result*i; 
   }
   cout<<"Factorial of "<<a<<" is: "<<result;
} 
```
