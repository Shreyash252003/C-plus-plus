#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter the number of rows you want::";
  cin>>n;
  for(int i=1;i<=3;i++){
    for(int j=1;j<=n;j++){
        if((i+j)%4==0){
            cout<<"*";
        }
        else if(i==2 && j%4==0){
                cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
  }
}
