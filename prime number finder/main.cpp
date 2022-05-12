#include <iostream>
using namespace std;

int main(){
    // printing prime numbers till n 
    int n,i,num,a;
    cout << "Enter the number till which you want to find the prime numbers";
    cin >> n;
    a=0;
    for(num=3;num<n;num=num+2){
        for (i=3;i<num;i=i+1){
            if (num%i==0)
            {
                a=1;
                break;

            }
            else{
                i=i+1;
            }
            
        }
        
        if (a==0)
        {
            cout<<num<<endl;
        }
        a=0;
        
    }
}