#include <iostream>
#include <climits>


using namespace std;
int kadane(int arr[],int n){
    int sum=0;
    int ma=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
        sum=0;
        }
        ma=max(ma,sum);
    }
    return ma;
}

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    cout<<kadane(arr,n)<<endl;
    cout<<sum<<endl;
    wrapsum=sum+kadane(arr,n);
    cout<<max(nonwrapsum,wrapsum);



}
