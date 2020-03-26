## Day1 Solutions

### Q) Find a element in an array of size ‘n’ in not more than n/2 operations using linear search algorithm.

##### Solution submitted by [Akshay Sharma](https://github.com/akshay2742) `Python`
```python
def linear_search(list,n):
    p=len(list)
    u=int(len(list)/2)
    count =0;
    for i in range(0,u):
        if list[i]==n:
            return i
        elif list[p-i-1]==n:
            return i
    return -1
        

list = [1,2,3,4,5,6,7,8]

print("List is: ",list)

x=int(input("Enter the element: "))
count_iter = linear_search(list,x) 
if(count_iter > -1):
    print("Element found in ",count_iter," iterations")
else:
    print("Element not found")
```
