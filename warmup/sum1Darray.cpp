#include <iostream>

using namespace std;

int main()
{
    int arr[5],sum=0;
    cout<<"Enter 5 elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of elements is: "<<sum;
    
}
