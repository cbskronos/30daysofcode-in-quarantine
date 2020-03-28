def min_sum(list):
    num1=list[0]
    num2=list[1]
    sum=list[0]+list[1]
    for i in range(len(list)):
        for j in range(len(list)):
            if i==j:
                continue
            else:
                compare=list[i]+list[j]
                if sum>compare:
                    sum=compare
                    num1=list[i]
                    num2=list[j]
    return num1,num2
    
array=input("Enter the Numbers: ")

list_num=list(map(int,array.split()))

print("\nList is: ",list_num)

print("\nNumbers are: ",list(min_sum(list_num)))

