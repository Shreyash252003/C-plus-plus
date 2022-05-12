#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    int mx=INT_MIN;
    int arr[100];
    cout<<"Enter the size of the array you want::";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index position "<<i<<"::";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
            cout<<mx<<endl;

    }


}
