#include <iostream>

using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    int c;
    cout<<0<<endl;
    cout<<1<<endl;
    for(int i=1;i<n-1;i++){
        c=a;
        a=b;
        b=a+c;
        cout<<b<<endl;
    }
}

int main()
{
   int n;
   cout<<"Enter the number of fibonacci numbers you want::";
   cin>>n;
   fibonacci(n);
}
