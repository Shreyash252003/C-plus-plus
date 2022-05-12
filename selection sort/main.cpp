#include <iostream>

using namespace std;

int main()
{
   int arr[10];
   int n;
   cout<<"Enter the size of the array you want::";
   cin>>n;
   for(int i=0;i<n;i++){
    cout<<"Enter the value of the element at the location::"<<i;
    cin>>arr[i];
   }
   for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;

   }
}

