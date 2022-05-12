#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int j=n-1;

    for(i=0;i<n;i++)
    {
        if(arr[i]+arr[j]>key)
        {
          j--;
          i--;
        }
        else if(arr[i]+arr[j]==key)
        {
            break;
        }

    }
    cout<<arr[i]<<arr[j]<<endl;
    return 0;
}
