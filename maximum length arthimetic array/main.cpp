#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    int difference;
    int sum=2;
    int ans=2;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int previous=arr[1]-arr[0];
    for(int i=1;i<n-1;i++){
        difference=arr[i+1]-arr[i];
        if(difference==previous){
            sum=sum+1;
        }
        else{
            ans=max(ans,sum);
            sum=2;
        }
        previous=difference;
    }

    cout<<ans;
}
