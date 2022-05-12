#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a::";
    cin>>a;
    for(int i=1;i<a;i++){
        for(int j=1;j<=(a*2);j++){
            if(j<=i || j>(a*2)-i){
                cout<<"*";

            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=a;i>0;i--){
        for(int j=1;j<=a*2;j++){
                if(j<=i || j>(a*2)-i){
                cout<<"*";

            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

        }


}

