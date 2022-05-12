#include <iostream>

using namespace std;

int main()
{
    int a,k;
    k=0;
    cout<<"Enter the number of rows you want in the floyds triangle::";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            ++k;
                cout<<k<<" ";

        }
        cout<<endl;

    }
}
