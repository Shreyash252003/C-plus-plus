#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    int sum=0;
    int ma=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum<0){
            sum=0;
        }
        ma=max(sum,ma);

    }
    cout<<ma;
}
