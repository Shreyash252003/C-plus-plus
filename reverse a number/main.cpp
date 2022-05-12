#include <iostream>

using namespace std;

int main()
{
    int n;
    int number=0;
    cout<<"Enter the number you want to reverse::";
    cin>>n;

    while(n>0){
    number=number*10+(n%10);
    n=n/10;

    }
    cout<<number;
}
