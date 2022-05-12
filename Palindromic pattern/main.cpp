#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the rows you want in the palindromic pattern::";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<" ";

        }
        for(int k=i;k>0;k--){
            cout<<k<<" ";
        }
        for(int l=2;l<=i;l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}
