#include <iostream>
#include <climits>
using namespace std;

int main(){
  int a[5];
  for(int i=0;i<5;i++){
    cin>>a[i];

  }
  int maxno=INT_MIN;
  int minno=INT_MAX;
  for(int i=0;i<5;i++){
    maxno=max(maxno,a[i]);
    minno=min(minno,a[i]);
  }
  cout<<maxno<<minno;
}
