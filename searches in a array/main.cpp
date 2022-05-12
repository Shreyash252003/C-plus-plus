#include <iostream>

using namespace std;

int main()
{
   int a[5];
   int n;
   for(int i=0;i<5;i++){
    cin>>a[i];
   }
   cout<<"Enter the number you want to search in the array::";
   cin>>n;
   for(int i=0;i<5;i++){
    if(a[i]==n){
        cout<<"The number is found at the location "<<i;
        break;
    }
    else{
        continue;
    }
   }

}
