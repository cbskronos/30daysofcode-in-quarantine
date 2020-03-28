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
