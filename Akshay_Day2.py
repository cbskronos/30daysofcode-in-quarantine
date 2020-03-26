def linear_search(list,n):
    p=len(list)
    u=int(len(list)/2)
    for i in range(0,u):
        if list[i]==n:
            return 1
        elif list[p-i-1]==n:
            return 1
    return 0
        
n=input("Enter the elements: ")

list=n.split()

print("List is: ",list)

x=int(input("Enter the element: "))

if(linear_search(list,x)):
    print("Element found")
else:
    print("Element not found")
        
            
                
            
                
        
            
    