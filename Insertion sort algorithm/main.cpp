#include <iostream>

using namespace std;

int main()
 {
    int n;
    int arr[10];
    cout<<"Enter the size of the array you want";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index location"<<i<<":";
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current; //The reason for taking j+1 here is as in the while loop j will be get decremented
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
}
