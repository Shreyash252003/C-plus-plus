#include <iostream>
#include <climits>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int mi=INT_MAX;
   int arr[n];
   const int N=1000;
   int idx[N];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }

   for(int i=0;i<N;i++){
       idx[i]=-1;
   }

   for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            mi=min(mi,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }




   }
   if(mi==INT_MAX){
    cout<<"Error";
   }
   else{
    cout<<mi;

   }


}
