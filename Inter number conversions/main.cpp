#include <iostream>
#include <string>

using namespace std;
int binaryTodecimal(int n){
    int number=0;
    int x=1;
    while(n>0){
        int y=n%100;
        number=number+x*y;
        x*=2;
        n/=10;
    }
    return number;
}

int OctaltoDecimal(int n){
    int number=0;
    int x=1;
    while(n>0){
        int y=n%10;
        number+=x*y;
        x*=8;
        y/=10;

    }
    return number;
}
int HexadecimaltoDecimal(string n){
    int x=1;
    int y=n.size();
    int number=0;
    for(int i=y-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
                number+=x*(n[i]-'0');

        }
        else if (n[i]>='A' && n[i]<='F'){
            number+=x*(n[i]-'A'+10);

        }
        x*=16;

    }
    return number;

}
int DecimaltoBinary(int n){
    int number=0;
    int base=1;
    while(n>0){
        int y=n%2;
        number=number+y*base;
        n/=2;
        base*=10;
    }
}
string DecimaltoHexadecimal(int n){
    string a;
    int t=to_string(n).size();
    while(n>0){
        int y=n%16;
        if(y<10){
            a.insert(t-1,y);
        }
        else if(y>=10){
            a.insert(t-1,y-10+'A');
        }
        t--;
        n=n/16;
    }
    cout<<a;

}


int main()
{

   DecimaltoHexadecimal(15);

}
