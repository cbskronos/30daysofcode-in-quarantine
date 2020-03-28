/* Given an array, find 2 numbers whose sum is closest to zero.
   (Manan Bedi) */
   
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
