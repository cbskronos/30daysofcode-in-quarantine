#include<iostream>
using namespace std;
void bubble_sort(int arr[50], int n);
void insertion_sort(int arr[50], int n);
int main()
{
	int arr[50];
	long long n;
	cout<<"\nEnter Number of elements in the array: ";
	cin>>n;
	cout<<"\nEnter the elements of the array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubble_sort(arr,n);
	insertion_sort(arr,n);
	return 0;
}

//Bubble Sort

void bubble_sort(int arr[50], int n)
{
	cout<<"\n1. BUBBLE SORT";
	int i,j,temp,bubble_comp=0,bubble_swap=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			++bubble_comp;
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				++bubble_swap;
			}
		}
	}
	cout<<"\nSorted Array: \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nComparisons Made: "<<bubble_comp;
	cout<<"\nSwaps Made: "<<bubble_swap;
}

//Insertion Sort

void insertion_sort(int arr[50], int n)
{
	cout<<"\n2.INSERTION SORT";
	int i,j,min,insert_comp=0,insert_swap=0;
	for(int i = 0; i < n; i++)
	{
		insert_comp++;
		min = arr[i];
		j = i-1;
		while(j >=0 && arr[j] > min)
		{
			arr[j + 1] = arr[j];  
            j = j - 1;  
            insert_swap++;
		}
		  arr[j + 1] = min; 
	}
	cout<<"\nSorted Array: \n";
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<"\t";
	}
	cout<<"\nComparisons Made: "<<insert_comp;
	cout<<"\nSwaps Made: "<<insert_swap;
}


