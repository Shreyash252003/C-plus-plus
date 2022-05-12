#include <iostream>

using namespace std;

int main()
{
    int a ,b;
    int flag=0;
    cout<<"Enter the first number::";
    cin>>a;
    cout<<"Enter the second number::";
    cin>>b;
    for(int i=a+1;i<b;i++){
        for(int j=2;j<i;j++){
        if(i%j==0){
                flag=1;
                break;


        }
        else{
            flag=0;
        }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
}
