#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the value of the Biggest number::";
    cin>>a;
    cout<<"Enter the value of the second number::";
    cin>>b;
    cout<<"Enter the value of the third number::";
    cin>>c;
    if(pow(a,2)==(pow(b,2)+pow(c,2))){
        cout<<"The entered numbers are a pythagorian triplet";
    }
    else{
        cout<<"The entered numbers are not a pythagorian triplet";
    }



}
