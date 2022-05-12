#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    int ma=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            if(max(ma,arr[i])==arr[i] && arr[i]>arr[i+1]){
                    sum++;
            ma=max(ma,arr[i]);

    }
    }
    cout<<sum;
}
