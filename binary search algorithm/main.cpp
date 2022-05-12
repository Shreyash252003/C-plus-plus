#include <iostream>

using namespace std;

int BinarySearch(int arr[],int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}

int main()
{
   int n;
   int arr[100];
   int key;
   cout<<"Enter the size of the array::";
   cin>>n;
   for(int i=0;i<n;i++){
    cout<<"Enter the element at position "<<i<<"::";
    cout<<endl;
    cin>>arr[i];
   }
   cout<<"Enter the key you want to search for in the array::";
   cin>>key;

   cout<<"The number entered was found at the index location "<<BinarySearch(arr,n,key);

   return 0;
}
