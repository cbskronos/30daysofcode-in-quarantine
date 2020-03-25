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