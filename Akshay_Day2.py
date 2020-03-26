def linear_search(list,n):
    flag=0
    length=len(list)
    h_length=int(len(list)/2)
    if length%2!=0:
        h_length=h_length+1
    for i in range(0,h_length):
        if list[i]==n:
            flag=1
            break
        elif list[length-i-1]==n:
            flag=1
            break
    if flag==1:
        print("Element found")
    else:
        print("Element not found")
        
array=input("Enter the elements: ")

list_num=list(map(int,array.split()))

print("List is: ",list_num)

search_element=int(input("Enter the element: "))

linear_search(list_num,search_element)



        
            
                
            
                
        
            
    
