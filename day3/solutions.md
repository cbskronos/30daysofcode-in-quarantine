## Day3 Solutions

### Q) Given an array find 2 numbers whose sum is closest to zero.

##### Solution submitted by [Manan Bedi](https://github.com/manan-bedi2908) `C++`
```c++
#include<iostream>
#include<algorithm> // for sort function, contains Standard Template Library (STL)
#include<climits> // for INT_MAX 
using namespace std;  

//Compare function using STL Implementation
bool compare(int x, int y) 
{ 
    return abs(x) < abs(y); //returns lowest absolute value
} 
  
void sum_closest_to_zero(int arr[50], int n) 
{ 
    sort(arr, arr + n, compare); //Sorts the elements in ascending order using STl 
    int min = INT_MAX; //INT_MAX contains the largest positive value that can be stored in int data-type
    int var1, var2;
    /* Logic - checks the two consecutive absolute elements and returns the lowest sum among all the elements*/
    for (int i = 1; i < n; i++) 
	{ 
        if (abs(arr[i - 1] + arr[i]) <= min) { 
            min = abs(arr[i - 1] + arr[i]); 
            var1 = i-1; 
            var2 = i; 
        } 
    } 
    cout <<"\nThe two elements in the array whose sum is closest to zero are: "<<arr[var1]<<" and "<<arr[var2]; 
} 
int main() 
{ 
  
    int arr[50],n;
    cout<<"\nEnter the number of elements of the array: ";
    cin>>n;
    cout<<"\nEnter the elements of the array: ";
    for(int i=0;i<n;i++) {
    	cin>>arr[i];
	}
    sum_closest_to_zero(arr, n); 
    return 0; 
} 
```

##### Solution submitted by [Akshay Sharma](https://github.com/akshay2742) `Python`
```python
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
```

##### Solution submitted by [Aditya](https://github.com/paditya99) `C++`
```c++
#include <iostream>
using namespace std;
int main()
{
    int arr[5],sum=0,a,b,c;
    cout<<"Enter 5 elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    a=arr[0]+arr[1];
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            sum=sum+arr[i]+arr[j];
            if(sum<a){
                b=i;
                c=j;
                a=sum;
            }
            sum=0;
        }
    }
    cout<<"Two numbers whose sum is closest to 0 are: "<<arr[b]<<" and "<<arr[c];
    cout<<"\nThe sum is: "<<a;
}
```
