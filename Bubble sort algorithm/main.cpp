#include <iostream>

using namespace std;

int main()
{
   int arr[100];
   int n;
   cout<<"Enter the size of the array you want";
   cin>>n;
   for(int i=0;i<n;i++){
    cout<<"Enter the element at position "<<i;
    cin>>arr[i];
   }
   int counter=0;
   while(counter<n){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
   return 0;
}
